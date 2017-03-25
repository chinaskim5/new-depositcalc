bin/deposit.exe: build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit.exe

build/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

build/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/main.o

clean:
	rm bin/deposit.exe build/*.o
