#include<stdio.h>

main()
{
    char email[20];
    char password[20];
    char email_verify[20] = "admin@gmail.com";
    char password_verify[20] = "123456";

    int verify_e = 0, verify_p = 0;

    printf("Enter email: ");
    scanf("%s",&email);
    printf("Enter password: ");
    scanf("%s",&password);

    for (int i = 0; email[i]!='\0'; i++)
    {
        if(email[i] == email_verify[i])
        {
            verify_e++;
        }
        else 
        {
            verify_e = 0;
            break;
        }
    }


     for (int i = 0; password[i]!='\0'; i++)
    {
        if(password[i] == password_verify[i])
        {
            verify_p++;
        }
        else 
        {
            verify_p = 0;
            break;
        }
    }

    if(verify_e>=1 && verify_p>=1)
    {
        printf("Login Successfully.....");
    }
    else 
    {
        printf("Login Failed.....");
    }
    
}