#include <stdio.h>

main() {
	int i,j;
    int size;
    int sum,add ;

    
    
    printf("Enter row size: ");
    scanf("%d", &size);
    printf("Enter column size: ");
    scanf("%d", &size);
    

    int a[size][size];
    
    
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    
    for (i = 0; i < size; i++) {
        sum+= a[i][i];           
        add += a[i][size - i - 1]; 
    }
    
 
    printf("The sum of first diagonal: %d\n", sum);
    
    printf("The sum of second diagonal: %d\n", add);

}

