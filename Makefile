# compiler
CC = gcc

# flags
CFLAGS = -Wall -Wextra -I./src

# source and executable
SRC = Main.c
EXEC = CaesarCipher

# default target
all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $(CFLAGS) -o $(EXEC) $(SRC)

# clean target
clean:
	rm -f $(EXEC)