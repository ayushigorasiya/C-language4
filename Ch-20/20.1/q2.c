#include <stdio.h>

void main()
{

    int x, y;
    printf("Enter The value of X : ");
    scanf("%d", &x);
    printf("Enter The value of Y : ");
    scanf("%d", &y);

     int *ptr=&x;
     int *p=&y;
    printf("Before swapping:\n");

    printf("%d\t",*ptr);
    printf("%d\n",*p);
     printf("after swapping:\n");

    printf("%d\t",*p);
    printf("%d",*ptr);
}