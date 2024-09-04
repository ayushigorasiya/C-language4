#include <stdio.h>

void main()
{

    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int a[size];
    printf("Enter Array Element:\n");
    for (int i = 0; i < size; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }
    int *ptr[size];

    for (int i = 0; i < size; i++)
    {
        ptr[i] = &a[i];
    }

    for (int i = size-1; i >=0; i--)
    {
        int mul = *ptr[i] * *ptr[i];
       printf("%d\t", mul);
    }
}