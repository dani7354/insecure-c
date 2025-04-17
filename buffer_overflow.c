#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    char outbuf[512];
    char buffer[512];

    sprintf(buffer, "FOO %s", argv[1]);
    sprintf(outbuf, buffer);
}
