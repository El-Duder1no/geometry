.PHONY: clean
CC = g++
CFLAGS = -Wall -Werror
EXE = bin/geometry

all: $(EXE)

$(EXE): build/main.o build/area.o build/circle.o build/getCoord.o build/intersection.o build/perimeter.o
	$(CC) $(CFLAGS) build/main.o build/area.o build/circle.o build/getCoord.o build/intersection.o build/perimeter.o -o $(EXE)

build/main.o: src/main.cpp
	$(CC) $(CFLAGS) -c src/main.cpp -o build/main.o

build/area.o: src/area.cpp
	$(CC) $(CFLAGS) -c src/area.cpp -o build/area.o

build/circle.o: src/circle.cpp
	$(CC) $(CFLAGS) -c src/circle.cpp -o build/circle.o

build/getCoord.o: src/getCoord.cpp
	$(CC) $(CFLAGS) -c src/getCoord.cpp -o build/getCoord.o

build/intersection.o: src/intersection.cpp
	$(CC) $(CFLAGS) -c src/intersection.cpp -o build/intersection.o

build/perimeter.o: src/perimeter.cpp
	$(CC) $(CFLAGS) -c src/perimeter.cpp -o build/perimeter.o

clean:
	rm -rf build/*.o bin/*.exe