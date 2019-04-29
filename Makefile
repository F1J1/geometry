CC = g++
CFLAGS = -c -Wall -Werror

all: main.exe

main.exe: main.o func.o hello.o
	$(CC) main.o func.o -o main.exe

main.o: main.c
	$(CC) $(CFLAGS) main.c

func.o: func.c
	$(CC) $(CFLAGS) func.c

clean:
	rm -rf *.o main.exe

