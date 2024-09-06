#include<stdio.h>

main(){
    int a = 10;
   
    
    for (int i = 0; i < 5; i++) {
    {

         for (int j = 0; j < 5 - i - 1; j++) {
            printf("_ ");
        }
       for (int k = a - i; k <= a; k++) {
            printf("%d ", k);
        }
       printf("\n");
       
    }
    
    

}

}