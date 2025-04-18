BIN_DIR = bin
CC = gcc

# Compilter flags from https://airbus-seclab.github.io/c-compiler-security/
CFLAGS = -g -O2 -Werror -Wall -Wextra -Wpedantic -Wformat=2 -Wformat-overflow=2 -Wformat-truncation=2 -Wformat-security -Wnull-dereference -Wstack-protector -Wtrampolines -Walloca -Wvla -Warray-bounds=2 -Wimplicit-fallthrough=3 -Wtraditional-conversion -Wshift-overflow=2 -Wcast-qual -Wstringop-overflow=4 -Wconversion -Warith-conversion -Wlogical-op -Wduplicated-cond -Wduplicated-branches -Wformat-signedness -Wshadow -Wstrict-overflow=4 -Wundef -Wstrict-prototypes -Wswitch-default -Wswitch-enum -Wstack-usage=1000000 -Wcast-align=strict -D_FORTIFY_SOURCE=3 -fstack-protector-strong -fstack-clash-protection -fPIE -fsanitize=bounds -fsanitize-undefined-trap-on-error -Wl,-z,relro -Wl,-z,now -Wl,-z,noexecstack -Wl,-z,separate-code

all: buffer_overflow insecure_string_copy integer_overflow passwords_free_in_memory sign_error narnia0

buffer_overflow: buffer_overflow.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/buffer_overflow buffer_overflow.c

insecure_string_copy: insecure_string_copy.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/insecure_string_copy insecure_string_copy.c

integer_overflow: integer_overflow.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/integer_overflow integer_overflow.c

passwords_free_in_memory: passwords_free_in_memory.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/passwords_free_in_memory passwords_free_in_memory.c

sign_error: sign_error.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/sign_error sign_error.c

narnia0: narnia0.c
	$(CC) $(CFLAGS) -o $(BIN_DIR)/narnia0 narnia0.c

clean:
	rm -f $(BIN_DIR)/buffer_overflow
	rm -f $(BIN_DIR)/insecure_string_copy
	rm -f $(BIN_DIR)/integer_overflow
	rm -f $(BIN_DIR)/passwords_free_in_memory
	rm -f $(BIN_DIR)/sign_error
	rm -f $(BIN_DIR)/narnia0
