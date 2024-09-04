#include <stdio.h>

main() {
    int i,size;
    
   
    printf("Enter array size: ");
    scanf("%d", &size);
    
    
    int a[size];
    
    
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    
    
    printf("Length of an Array: %d\n", size);
    
}

