CC = gcc 
CFLAGS = -c -Wall -Werror
EXECUTABLE = main.exe 
DIR = build
DAR = src
DUR = bin


all: $(DUR)/$(EXECUTABLE)
	$(DIR)/main.o: $(DAR)/main.c 
	$(CC) $(CFLAGS) $(DAR)/main.c -o $(DIR)/main.o 

$(DIR)/func.o: $(DAR)/func.c
	$(CC) $(CFLAGS) -c $(DAR)/func.c -o $(DIR)/func.o 

$(DUR)/$(EXECUTABLE): $(DIR)/main.o $(DIR)/func.o
	$(CC) $(DIR)/main.o $(DIR)/func.o -o $(DUR)/$(EXECUTABLE) -lm


clean:
rm -rf build/ bin/
