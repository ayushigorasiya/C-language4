#include <stdio.h>

main() {
	
	//do while loop
    int n, i;
    printf("Enter any number: ");
    scanf("%d", &n);
    i = 2;
    do {
	 printf("%d ", i);
    i += 2;
    } 
	while (i <= n);  
}

