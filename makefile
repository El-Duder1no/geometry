.PHONY: clean all

CC = g++
CFLAGS = -Wall -Werror --std=c++11

EXE = bin/geometry
TEST = bin/test

DIR_SRC = build/src
DIR_TEST = build/test

GTEST = thirdparty/googletest
GTEST_LIB = thirdparty/googletest/lib

LD_FLAG = -L $(GTEST_LIB) -l gtest_main -l pthread
CPPFLAGS += -isystem $(GTEST)/include
CXXFLAGS += -g -Wall -Werror -Wextra -pthread -std=c++11

all : $(TEST) $(EXE)

$(EXE): $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o
	$(CC) $(CFLAGS) $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o -o $(EXE)

$(TEST) : $(DIR_TEST)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/structFill.o $(DIR_SRC)/parse.o
	$(CC) $(CPPFLAGS) $(CXXFLAGS) $(LD_FLAG) $(DIR_TEST)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/structFill.o $(DIR_SRC)/parse.o -o $(TEST)


$(DIR_SRC)/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o $(DIR_SRC)/main.o

$(DIR_SRC)/area.o: src/area.cpp
	$(CC) $(CFLAGS) -c src/area.cpp -o $(DIR_SRC)/area.o

$(DIR_SRC)/perimeter.o: src/perimeter.cpp
	$(CC) $(CFLAGS) -c src/perimeter.cpp -o $(DIR_SRC)/perimeter.o

$(DIR_SRC)/parse.o: src/parse.cpp
	$(CC) $(CFLAGS) -c src/parse.cpp -o $(DIR_SRC)/parse.o

$(DIR_SRC)/structFill.o: src/structFill.cpp
	$(CC) $(CFLAGS) -c src/structFill.cpp -o $(DIR_SRC)/structFill.o

$(DIR_TEST)/main.o : test/main.cpp
	$(CC) $(CPPFLAGS) $(CXXFLAGS) -I $(GTEST)/include -I src -c test/main.cpp -o $(DIR_TEST)/main.o


clean:
	rm -rf $(DIR_SRC)/*.o 
	rm -rf $(DIR_TEST)/*.o 
	rm bin/*.exe