#include <stdio.h>

main() {
	//Table
    int n,i;

    printf("Enter any number: ");
    scanf("%d", &n); 
    printf("\n\n");
   
    for (i = 1; i <= 10; i++) {
        printf("%d X %d = %d\n", n, i, n * i);
    }


}

