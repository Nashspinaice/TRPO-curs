all:  create bin/main


create:
	mkdir -p build
	mkdir -p bin

bin/main: build/main.o build/menu.o build/fieldfull.o build/Vscomp.o    build/Vshuman.o
	g++ -Wall -Werror build/main.o build/menu.o build/fieldfull.o build/Vscomp.o    build/Vshuman.o -o bin/main

build/main.o: src/main.cpp
	g++ -Wall -Werror -c src/main.cpp -o build/main.o

build/menu.o: build/menu.cpp
	g++ -Wall -Werror -c src/menu.cpp -o build/menu.o

build/fieldfull.o: src/fieldfull.cpp
	g++ -Wall -Werror -c src/fieldfull.cpp -o build/fieldfull.o

build/Vscomp.o: src/Vscomp.cpp
	g++ -Wall -Werror -c src/Vsvomp.cpp -o build/Vscomp.o

build/Vshuman.o: src/Vshuman.cpp
	g++ -Wall -Werror -c src/Vshuman.cpp -o build/Vshuman.o
	

.PHONY: clean

clean:
rm -rf build/*.o
