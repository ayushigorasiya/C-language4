#include <stdio.h>

main() {
    int num1, num2, num3;


    printf("Enter a value of the first number: ");
    scanf("%d", &num1);
    
    printf("Enter a value of the second number: ");
    scanf("%d", &num2);
    
    printf("Enter a value of the third number: ");
    scanf("%d", &num3);
    
    int max;

   
    if (num1 > num2) {
        if (num1 > num3) {
            max = num1;
        } 
		else {
            max = num3;
        }
    } 
	else {
        if (num2 > num3) {
            max = num2;
        } 
		else {
            max = num3;
        }
    }
    
   
    printf("The maximum value is: %d ", max);
}
