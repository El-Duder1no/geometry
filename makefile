.PHONY: clean all
CC = g++
CXXFLAGS = -Wall -Werror --std=c++17
EXE = bin/geometry
TEST = bin/test

DIR_SRC = build/src
DIR_TEST = build/test

GTEST = thirdparty/googletest
GTEST_INCLUDE = thirdparty/googletest/include
GTEST_LIB = thirdparty/googletest/include

THRDPARTY_FLG += -L $(GTEST_INCLUDE) -l gtest_main -l pthread

all: $(EXE) $(TEST)

$(EXE): $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o 
	$(CC) $(CXXFLAGS) $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o  -o $(EXE)

$(DIR_SRC)/main.o: src/main.cpp
	$(CC) $(CXXFLAGS) -c src/main.cpp -o $(DIR_SRC)/main.o

$(DIR_SRC)/area.o: src/area.cpp
	$(CC) $(CXXFLAGS) -c src/area.cpp -o $(DIR_SRC)/area.o

$(DIR_SRC)/perimeter.o: src/perimeter.cpp
	$(CC) $(CXXFLAGS) -c src/perimeter.cpp -o $(DIR_SRC)/perimeter.o

$(DIR_SRC)/parse.o: src/parse.cpp
	$(CC) $(CXXFLAGS) -c src/parse.cpp -o $(DIR_SRC)/parse.o

$(DIR_SRC)/structFill.o: src/structFill.cpp
	$(CC) $(CXXFLAGS) -c src/structFill.cpp -o $(DIR_SRC)/structFill.o


$(TEST) : $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/structFill.o $(DIR_TEST)/main.o
	$(CC) $(CXXFLAGS) $(THRDPARTY_FLG) $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/structFill.o $(DIR_TEST)/main.o -o $(TEST)

$(DIR_T)/main.o : test/main.cpp
	$(CC) $(FLAGS) -I $(GTEST_INCLUDE) -I src -c test/main.cpp -o $(DIR_T)/main.o
clean:
	rm -rf $(DIR_SRC)/*.o 
	rm -rf $(DIR_TEST)/*.o 
	rm bin/*.exe