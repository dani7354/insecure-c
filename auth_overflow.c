#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define PASSWORD_SIZE 16
// Insecure version
// int check_authentication(char *password)
// {
//     int auth_flag = 0;
//     char password_buf[PASSWORD_SIZE];

//     strcpy(password_buf, password);

//     if (strcmp(password_buf, "secret") == 0)
//         auth_flag = 1;

//     printf("auth_flag: %d\n", auth_flag);

//     return auth_flag;
// }

int check_authentication(char *password)
{
    int auth_flag = 0;
    char password_buf[PASSWORD_SIZE];

    strncpy(password_buf, password, sizeof(password_buf) - 1); // Limit number of characters copied

    if (strcmp(password_buf, "secret") == 0)
        auth_flag = 1;

    printf("auth_flag: %d\n", auth_flag);

    return auth_flag;
}

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <password>\n", argv[0]);
        return 1;
    }

    if (check_authentication(argv[1]))
        printf("Authentication successful!\n");
    else
        printf("Authentication failed!\n");

    return 0;
}
