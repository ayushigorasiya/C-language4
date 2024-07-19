#include <stdio.h>

int main() {
    int n;
    printf("Enter Array Size: ");
    scanf("%d", &n);
    
    int a[n]; 
    printf("Enter Array Element:\n");
    for (int i = 0; i < n; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
 
    printf("Negative elements from an Array: ");
    int negative = 0; 
    for (int i = 0; i < n; i++) {
        if (a[i] < 0) {
            if (negative) {
                printf(", "); 
            }
            printf("%d", a[i]);
            
    }
    printf("\n");
    }
}