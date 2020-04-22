all: bin/geometry

bin/geometry: build/main.o build/area.o build/circle.o build/getCoord.o build/intersection.o build/perimeter.o
	g++ -Wall -Werror build/main.o build/area.o build/circle.o build/getCoord.o build/intersection.o build/perimeter.o -o bin/geometry.exe
	
build/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/main.o
	
build/area.о: src/area.cpp
	g++ -Wall -Werror -c src/area.cpp -o build/area.o
	
build/circle.o: src/circle.cpp
	g++ -Wall -Werror -c src/circle.cpp -o build/circle.o
	
build/getCoord.o: src/getCoord.cpp
	g++ -Wall -Werror -c src/getCoord.cpp -o build/getCoord.o
	
build/intersection.o: src/intersection.cpp
	g++ -Wall -Werror -c src/intersection.cpp -o build/intersection.o
	
build/perimeter.o: src/perimeter.cpp
	g++ -Wall -Werror -c src/perimeter.cpp -o build/perimeter.o

clean:
	rm -rf build/*.o bin/*.exe
	