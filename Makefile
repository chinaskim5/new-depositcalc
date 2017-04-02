.PHONY: all clean test

all: build/main.o build/deposit.o
	gcc build/main.o build/deposit.o -o bin/deposit.exe

build/deposit.o: src/deposit.c src/deposit.h
	gcc -Wall -Werror -c src/deposit.c -o build/deposit.o

build/main.o: src/main.c src/deposit.h
	gcc -Wall -Werror -c src/main.c -o build/main.o

test:deposit-test

deposit-test: build/test/main.o build/test/deposit_test.o build/deposit.o
	gcc build/test/main.o build/test/deposit_test.o build/deposit.o -o bin/deposit-test

build/test/main.o: test/main.c
	gcc -I src -I thirdparty -Wall -Werror -c test/main.c -o build/test/main.o

build/test/deposit_test.o: test/deposit_test.c
	gcc -I src -I thirdparty -Wall -Werror -c test/deposit_test.c -o build/test/deposit_test.o


clean:
	rm -rf bin/* build/*.o build/test/*.o
