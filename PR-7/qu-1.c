#include<stdio.h>

void sum(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
    int ans =a+b;
    printf("The sum is %d\n",ans);

}
void minus(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
    printf("Enter the value of b:");
    scanf("%d",&b);
    int ans =a-b;
    printf("The minus is %d\n",ans);

}
void multiply(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
    int ans =a*b;
    printf("The multiply is %d\n",ans);

}
void division(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
    int ans =a/b;
    printf("The division is %d\n",ans);

}
void modul(){
    int a,b;
    printf("Enter the value of a :");
    scanf("%d",&a);
     printf("Enter the value of b:");
    scanf("%d",&b);
    int ans =a%b;
    printf("The modulo is %d\n",ans);

}


void main(){
    int choice;


    do
    {
    
        printf("Press 1 for +\n");
        printf("Press 2 for -\n");

        printf("Press 3 for *\n");
        printf("Press 4 for /\n");
        printf("Press 5 for %%\n");
        printf("Press 0 for the exit\n");


        printf("Enter your choice :");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                sum();
                break;
            case 2:
                minus();
                break;
            case 3:
                multiply();
                break;
            case 4:
                division();
                break;
            case 5:
                modul();
                break;
            default:
                printf("please enter valid choice...");
        }
    
     } while (choice!=0);

}