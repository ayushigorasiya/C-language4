#include<stdio.h>

main(){
    
    int a=10;

    int*ptr=&a;

    printf("A : %d\n",a);
    printf("PTR : %d\n",*ptr);
    
    a=20;
    printf("A : %d\n",a);
    printf("PTR : %d\n",*ptr);
    *ptr=30;
    printf("A : %d\n",a);
    printf("PTR : %d\n",*ptr);

}