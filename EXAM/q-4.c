#include<stdio.h>
#define p printf
#define s scanf

void even (int *arr, int size){
    p("Even elements in the array is:\n");
    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) { 
             printf("%d ", *(arr + i));
        }
    }
    p("\n\n");

}

int main(){

    int size;

    p("Enter The Array of Size :-");
    s("%d" , &size);

    int array[size];

    p("Enter  elements:%d\n", size);
    for (int i = 0; i < size; i++) {
        s("%d", &array[i]);
    }

    even(array,size);
}
