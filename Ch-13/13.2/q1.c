#include <stdio.h>

main() {
	int i,j;
    int row, cols;
    float sum;
    
    
    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &cols);
    
    
    int a[row][cols];
    
   
    printf("Enter array's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
            sum += a[i][j];  
        }
    }
    
    
    float avg = sum / (row * cols);
    
    
    printf("Average : %.2f\n", avg);
    
  
}

