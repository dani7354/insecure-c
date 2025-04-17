#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_SIZE 256


// int main(int argc, char *argv[])
// {
//     char *password = malloc(PASSWORD_SIZE);
//     if (password == NULL) {
//         fprintf(stderr, "Memory allocation failed\n");
//         return 1;
//     }

//     strncpy(password, argv[1], PASSWORD_SIZE - 1);

//     printf("Password address: %p\n", &password);
//     printf("Entered password: %.*s \n", sizeof(password), password);

//     // Check password...

//     free(password); // password is still in memory and can be reallocated by other processes!
// }


int main(int argc, char *argv[])
{
    char *password = malloc(PASSWORD_SIZE);
    if (password == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }

    strncpy(password, argv[1], PASSWORD_SIZE - 1);

    printf("Password address: %p\n", &password);
    printf("Entered password: %s \n", password);

    // Check password...

    memset(password, 0, PASSWORD_SIZE); // Clear the password from memory
    free(password);
}
