#include <stdio.h>
#include <string.h>

main()
{
    char password[20];
    int upr = 0, lwr = 0, digit = 0, symbol = 0;

    printf("Enter your password: ");
    scanf("%s", &password);

    int len = strlen(password);

    if (len >= 6)
    {
        for (int i = 0; i < len; i++)
        {
            if (password[i] >= 'A' && password[i] <= 'Z')
                upr++;

            else if (password[i] >= 'a' && password[i] <= 'z')

                lwr++;

            else if (password[i] >= '0' && password[i] <= '9')

                digit++;

            else

                symbol++;
        }
    }
    else
    {
        printf("Password is not strong...........");
    }

    (upr >= 1 && lwr >= 1 && digit >= 1 && symbol >= 1)
        ? printf("Password is Strong..")
        : printf("Password is not strong...........");
}