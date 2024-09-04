#include <stdio.h>
 main() {
    int n,i;
    
   
    printf("Enter any number: ");
    scanf("%d", &n);
    
   
    if (n <= 0) {
        printf("Please enter a positive number.\n");
        
    }

   
    int a = 0, b = 1, next;

    
    if (n >= 1) {
        printf("%d", a);
    }

    
    if (n >= 2) {
        printf(", %d", b);
    }

    
    for ( i = 3; i <= n; i++) {
        next = a + b;  
        printf(", %d", next); 
        a = b; 
        b = next; 
    }

  
}

