#include <stdio.h>

main() {
    int n,i;
    int fact = 1; 

    
    printf("Enter any number: ");
    scanf("%d", &n); 
    
    for ( i = 1; i <= n; i++) {
        fact *= i; 
    }

   
    printf("The factorial of %d is: %d\n", n, fact);

   
}

