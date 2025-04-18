#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Insecure version
// void getComment(unsigned int len, char *src)
// {
//     unsigned int size;
//     size = len - 2;
//     char *comment = (char *) malloc(size + 1);

//     memcpy(comment, src, size);
//     return;
// }

void getComment(unsigned int len, char *src)
{
    if (len < 2) {
        fprintf(stderr, "Error: Length must be at least 2\n");
        return;
    }

    size_t size;
    size = len - 2;
    char *comment = (char *) malloc(size + 1);
    if (comment == NULL) {
        fprintf(stderr, "Error: Memory allocation failed\n");
        return;
    }

    memcpy(comment, src, size);
    return;
}

int main(int argc, char *argv[])
{
    (void) argc;
    (void) argv;
    char *src = "This is a comment";
    getComment(1, src);
}
