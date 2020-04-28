.PHONY: clean all
CC = g++
CFLAGS = -Wall -Werror
EXE = bin/geometry

all: $(EXE)

$(EXE): build/main.o build/area.o build/perimeter.o build/circle.o build/geomCalc.o build/parse.o build/structFill.o 
	$(CC) $(CFLAGS) build/main.o build/area.o build/perimeter.o build/circle.o build/geomCalc.o build/parse.o build/structFill.o  -o $(EXE)

build/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o build/main.o

build/area.o: src/area.cpp
	$(CC) $(CFLAGS) -c src/area.cpp -o build/area.o
	
build/perimeter.o: src/perimeter.cpp
	$(CC) $(CFLAGS) -c src/perimeter.cpp -o build/perimeter.o

build/circle.o: src/circle.cpp
	$(CC) $(CFLAGS) -c src/circle.cpp -o build/circle.o

build/geomCalc.o: src/geomCalc.cpp
	$(CC) $(CFLAGS) -c src/geomCalc.cpp -o build/geomCalc.o

build/parse.o: src/parse.cpp
	$(CC) $(CFLAGS) -c src/parse.cpp -o build/parse.o

build/structFill.o: src/structFill.cpp
	$(CC) $(CFLAGS) -c src/structFill.cpp -o build/structFill.o

clean:
	rm -rf build/*.o bin/*.exe