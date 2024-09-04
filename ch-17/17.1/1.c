<<<<<<< HEAD
#include <stdio.h>


//TSRS

int arraySum(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

void main() {
    int  size;

  
    printf("Enter array size : ");
    scanf("%d", &size);

  
    int a[size];

    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&a[i]);
      
    }

  
    int sum = arraySum( a, size);

    
    printf("The sum of the array: %d\n", sum);

  
}
=======
#include <stdio.h>


//TSRS

int arraySum(int a[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

void main() {
    int  size;

  
    printf("Enter array size : ");
    scanf("%d", &size);

  
    int a[size];

    
    printf("Enter array elements:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d",&a[i]);
      
    }

  
    int sum = arraySum( a, size);

    
    printf("The sum of the array: %d\n", sum);

  
}
>>>>>>> e6b4d43af53a25c3a655be88bcbeee83068ee3bf
