#include <stdio.h>

main() {
   
    int a, b;

    printf("Enter value for a: ");
    scanf("%d", &a);  

    printf("Enter value for b: ");
    scanf("%d", &b);  

   
    printf("Before swapping:\n A = %d\n B = %d\n", a, b);

    a = a + b; 
    b = a - b; 
    a = a - b;  
  
   printf("After swapping:\n A = %d\n B = %d\n", a, b);


}

