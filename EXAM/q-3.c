#include <stdio.h>

void printOddElements(int arr[], int size);

int main() {
    int size;

   
    printf("Enter the number of elements in the array: ");
    scanf("%d", &size);

    int arr[size];

   
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        printf("Element [%d]: ", i);
        scanf("%d", &arr[i]);
    }

   
    printf("Odd elements in the array are:\n");
    printOddElements(arr, size);

    return 0;
}

void printOddElements(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 != 0) { 
            printf("%d\n", arr[i]);
        }
    }
}
