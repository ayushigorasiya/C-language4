#include <stdio.h>
 main() {
    int i,size;
    

    printf("Enter array size: ");
    scanf("%d", &size);
    
    
    int a[size], b[size], c[size];
    
   
    printf("Enter array A's elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    printf("Enter array B's elements:\n");
    for (i = 0; i < size; i++) {
        printf("b[%d] = ", i);
        scanf("%d", &b[i]);
    }
    
   
    for (i = 0; i < size; i++) {
        c[i] = a[i] + b[i];
    }
    
   
    printf("Array C is: ");
    for (i = 0; i < size; i++) {
        if (i > 0) {
            printf(", ");
        }
        printf("%d", c[i]);
    }
    printf("\n");
    
  
}


