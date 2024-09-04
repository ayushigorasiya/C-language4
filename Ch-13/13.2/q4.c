#include <stdio.h>

main() {
	int i,j;
    int size; 
    int a[i][j];
    int sum=0;
    printf("Enter row size: ");
    scanf("%d", &size);
    printf("Enter column size: ");
    scanf("%d", &size);
    
   
    printf("Enter array's elements:\n");
    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
   
    printf("Boundary elements are:\n");
    
    
    for (j = 0; j < size; j++) {
        printf("%d ", a[i][j]);
        sum += a[i][j];
    }
    printf("\n");
    
    
    for (i = 1; i < size - 1; i++) {
        printf("%d ", a[i][size - 1]);
        sum += a[i][size - 1];
    }
    printf("\n");
    
    
    for (j = size - 1; j >= 0; j--) {
        printf("%d ",a[size - 1][j]);
        sum += a[size - 1][j];
    }
    printf("\n");
    
    
    for (i = size - 2; i > 0; i--) {
        printf("%d ", a[i][j]);
        sum += a[i][j];
    }
    printf("\n");
    
    
    printf("The sum of boundary elements : %d\n", sum);
    
   
}

