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
    char buf[BUFSIZE];

    strncpy(buf, argv[1], BUFSIZE - 1); // Use strncpy to prevent buffer overflow
    printf("String: %.*s\n", BUFSIZE, buf); // Limit output to BUFSIZE
    printf("String length: %zu\n", strlen(buf));

    return 0;
}
