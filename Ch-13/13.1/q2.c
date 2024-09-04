#include <stdio.h>

 main() {
    int i,size;
    float sum;
    
   
    printf("Enter array size: ");
    scanf("%d", &size);

    int a[size];
    
  
    printf("Enter array elements:\n");
    for (i = 0; i < size; i++) {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum += a[i];  
    }
    
   
    float avg = sum / size;
    printf("Average of an Array: %.2f\n", avg);
    

}

