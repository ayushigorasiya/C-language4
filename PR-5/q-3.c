#include <stdio.h>

int main() {
    int row, col;
    
   
    printf("Enter the array's row & column size: ");
    scanf("%d", &row);
    col = row;
    int a[row][col], 
    transpose[col][row];
    
 
    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            transpose[j][i] = a[i][j];
        }
    }
    
   
    printf("The transpose matrix of an array:\n");
    for (int i = 0; i < col; i++) {
        for (int j = 0; j < row; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
    
    
}