BIN_DIR = bin
CC = gcc

all: buffer_overflow insecure_string_copy integer_overflow passwords_free_in_memory sign_error

buffer_overflow: buffer_overflow.c
	$(CC) -g -Wall -o $(BIN_DIR)/buffer_overflow buffer_overflow.c

insecure_string_copy: insecure_string_copy.c
	$(CC) -g -Wall -o $(BIN_DIR)/insecure_string_copy insecure_string_copy.c

integer_overflow: integer_overflow.c
	$(CC) -g -Wall -o $(BIN_DIR)/integer_overflow integer_overflow.c

passwords_free_in_memory: passwords_free_in_memory.c
	$(CC) -g -Wall -o $(BIN_DIR)/passwords_free_in_memory passwords_free_in_memory.c

sign_error: sign_error.c
	$(CC) -g -Wall -o $(BIN_DIR)/sign_error sign_error.c

clean:
	rm -f $(BIN_DIR)/buffer_overflow
	rm -f $(BIN_DIR)/insecure_string_copy
	rm -f $(BIN_DIR)/integer_overflow
	rm -f $(BIN_DIR)/passwords_free_in_memory
	rm -f $(BIN_DIR)/sign_error
