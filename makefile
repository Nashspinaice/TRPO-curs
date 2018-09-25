all:  create bin/main


create:
	mkdir -p build
	mkdir -p bin

bin/main: build/Vshuman.o build/fieldfull.o build/menu.o build/main.o  
	gcc -Wall -Werror build/Vshuman.o build/fieldfull1.o 
	build/menu.o	build/main.o -o bin/main

build/Vshuman.o: src/Vshuman.c
	gcc -Wall -Werror -c src/Vshuman.c -o build/Vshuman.o
build/fieldfull.o: src/fieldfull1.c
	gcc -Wall -Werror -c src/fieldfull1.c -o build/fieldfull1.o
build/menu.o: src/menu.c
	gcc -Wall -Werror -c src/menu.c -o build/menu.o
build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o



.PHONY: clean

clean:
	rm -rf build/*.o
