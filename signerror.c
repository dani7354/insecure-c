#include <stdio.h>
#include <stdlib.h>
#include <string.h>

# define BUFSIZE 42

int main (int argc , char * argv []) {
    int len ;
    char buf [ BUFSIZE ];

    len = atoi ( argv [1]);
    if ( len < BUFSIZE )
        memcpy ( buf , argv [2] , len );
    else
        printf ( " Too much data " );

    return 0;
}
