#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void getComment(unsigned int len, char *src)
{
    unsigned int size;
    size = len - 2;
    char *comment = (char *) malloc(size + 1);

    memcpy(comment, src, size);
    return;
}

int main(int argc, char *argv[])
{
    char *src = "This is a comment";
    getComment(100, src);
}
