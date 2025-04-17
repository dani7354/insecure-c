#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFSIZE 128


// int main(int argc, char *argv[])
// {
//     int len;
//     char buf[BUFSIZE];

//     len = atoi(argv[1]);
//     printf("Length of data %d\n", len);

//     if (len < BUFSIZE)
//     {
//         memcpy(buf, argv[2], len);
//         printf("Data copied: %s\n", buf);
//     }
//     else
//         printf("Too much data!\n");
// }

int main(int argc, char *argv[])
{
    unsigned int len;  // Use unsigned int for length
    char buf[BUFSIZE];

    len = atoi(argv[1]);
    printf("Length of data %d\n", len);

    if (len < BUFSIZE)
    {
        memcpy(buf, argv[2], len);
        printf("Data copied: %s\n", buf);
    }
    else
        printf("Too much data!\n");
}
