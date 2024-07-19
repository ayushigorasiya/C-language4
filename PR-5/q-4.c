#include <stdio.h>

int main() {
    int row, col;
    

    printf("Enter the array's row size: ");
    scanf("%d", &row);
    printf("Enter the array's column size: ");
    scanf("%d", &col);
    
    int a[row][col];
    
    
    printf("Enter array's elements:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
   
    printf("The matrix entered is:\n");
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
    

    int row_num;
    printf("Enter row number: ");
    scanf("%d", &row_num);
    
    printf("Elements of row %d: ", row_num);
    int sum_row = 0;
    for (int j = 0; j < col; j++) {
        printf("%d", a[row_num][j]);
        sum_row += a[row_num][j];
        if (j < col - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("The sum of row %d: %d\n", row_num, sum_row);
    

    int col_num;
    printf("Enter column number: ");
    scanf("%d", &col_num);
    
    printf("Elements of column %d: ", col_num);
    int sum_col = 0;
    for (int i = 0; i < row; i++) {
        printf("%d", a[i][col_num]);
        sum_col += a[i][col_num];
        if (i < row - 1) {
            printf(", ");
        }
    }
    printf("\n");
    printf("The sum of column %d: %d\n", col_num, sum_col);
    
    
}