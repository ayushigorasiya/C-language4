#include <stdio.h>

main() {
	//while loop
    int n;

  
    printf("Enter any number: ");
    scanf("%d", &n); 

   
    while (n >= 1) {
        if (n % 2 != 0) {
            printf("%d ", n);
        }
        n--;
    }

   

}

