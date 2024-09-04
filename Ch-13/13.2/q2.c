#include <stdio.h>

main() {
	int i,j;
    int row, cols;
    
   
    printf("Enter row size: ");
    scanf("%d", &row);
    printf("Enter column size: ");
    scanf("%d", &cols);
    
    
    int a[row][cols], b[row][cols], c[row][cols];
    
   
    printf("Enter A's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    printf("Enter B's elements:\n");
    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            printf("b[%d][%d] = ", i, j);
            scanf("%d", &b[i][j]);
        }
    }
    
    
    for (i = 0; i < row; i++) {
        for (j = 0; j < cols; j++) {
            c[i][j] = a[i][j] + b[i][j];
        }
    }
    
  
    printf("C is:\n");
    for (i = 0; i < row; i++) {
      for (j = 0; j < cols; j++) {
            printf("%d ", c[i][j]);
        }
        printf("\n");
    }
    
    
}


