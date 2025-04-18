#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// int main(int argc, char *argv[])
// {
//     char outbuf[512];
//     char buffer[512];

//     sprintf(buffer, "FOO %s", argv[1]);
//     sprintf(outbuf, buffer);
// }

int main(int argc, char *argv[])
{
    (void) argc;

    char outbuf[512];
    char buffer[512];

    strncpy(buffer, argv[1], sizeof(buffer) - 1); // Use strncpy to prevent buffer overflow
    strncpy(outbuf, buffer, sizeof(outbuf));

    printf("String: %s\n", outbuf);
}
