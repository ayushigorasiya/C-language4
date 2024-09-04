#include <stdio.h>

main() {
    
    int a, b, swap;

    
    printf("Enter value for a: ");
    scanf("%d", &a);  

    printf("Enter value for b: ");
    scanf("%d", &b);  

    
    printf("Before swapping:\n A = %d\n B = %d\n", a, b);

  
    swap = a;  
    a = b;    
    b = swap;  

    
   printf("After swapping:\n A = %d\n B = %d\n", a, b);


  
}

