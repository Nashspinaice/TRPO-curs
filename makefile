all:  create bin/main


create:
	mkdir -p build
	mkdir -p bin

bin/main: build/main.o build/menu.o build/fieldfull.o build/Vscomp.o    	build/Vshuman.o
	gcc -Wall -Werror build/main.o build/menu.o build/fieldfull.o 		build/Vscomp.o    build/Vshuman.o -o bin/main


build/main.o: src/main.c
	gcc -Wall -Werror -c src/main.c -o build/main.o

build/menu.o: src/menu.c
	gcc -Wall -Werror -c src/menu.c -o build/menu.o

build/fieldfull.o: src/fieldfull.c
	gcc -Wall -Werror -c src/fieldfull.c -o build/fieldfull.o

build/Vscomp.o: src/Vscomp.c
	gcc -Wall -Werror -c src/Vsvomp.c -o build/Vscomp.o

build/Vshuman.o: src/Vshuman.c
	gcc -Wall -Werror -c src/Vshuman.c -o build/Vshuman.o
	

.PHONY: clean

clean:
	rm -rf build/*.o
