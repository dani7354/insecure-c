#include <stdio.h>
#include <string.h>

#define BUFSIZE 128

// Insecure version
// int main(int argc, char *argv[])
// {
//     char buf[BUFSIZE];

//     strcpy(buf, argv[1]);
//     printf("%s \n", buf);

//     return 0;
// }

int main(int argc, char *argv[])
{
    (void) argc; // Unused variable. Prevents compiler warnings.

    char buf[BUFSIZE];

    size_t maxBytesToCopy = sizeof(buf) - 1; // Reserve space for null terminator
    strncpy(buf, argv[1], maxBytesToCopy); // Use strncpy to prevent buffer overflow
    printf("String: %.*s\n", BUFSIZE, buf); // Limit output to BUFSIZE
    printf("String length: %zu\n", strlen(buf));

    return 0;
}
