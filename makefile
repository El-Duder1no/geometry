.PHONY: clean all
CC = g++
CXXFLAGS = -Wall -Werror
EXE = bin/geometry
TEST = bin/test

DIR_SRC = build/src
DIR_TEST = build/test

GTEST = thirdparty/googletest
GTEST_INCLUDE = thirdparty/googletest/include

THRDPARTY_FLG += -isystem $(GTEST_INCLUDE)

all: $(EXE) $(TEST)

$(EXE): $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/circle.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o 
	$(CC) $(CXXFLAGS) $(DIR_SRC)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/circle.o $(DIR_SRC)/parse.o $(DIR_SRC)/structFill.o  -o $(EXE)

$(DIR_SRC)/main.o: src/main.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/main.cpp -o $(DIR_SRC)/main.o

$(DIR_SRC)/area.o: src/area.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/area.cpp -o $(DIR_SRC)/area.o

$(DIR_SRC)/build/perimeter.o: src/perimeter.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/perimeter.cpp -o $(DIR_SRC)/perimeter.o

$(DIR_SRC)/circle.o: src/circle.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/circle.cpp -o $(DIR_SRC)/circle.o

$(DIR_SRC)/parse.o: src/parse.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/parse.cpp -o $(DIR_SRC)/parse.o

$(DIR_SRC)/structFill.o: src/structFill.cpp
	$(CC) $(CXXFLAGS) -c --std=c++17 src/structFill.cpp -o $(DIR_SRC)/structFill.o


$(TEST) : $(DIR_TEST)/main.o $(DIR_SRC)/area.o $(DIR_SRC)/perimeter.o $(DIR_SRC)/circle.o $(DIR_SRC)/structFill.o
	$(CC) $(THRDPARTY_FLG) -I $(GTEST_INCLUDE) -I src -c test/main.cpp -o $@

clean:
	rm -rf $(DIR_SRC)/*.o 
	rm -rf $(DIR_TEST)/*.o 
	rm bin/*.exe