<<<<<<< HEAD
#include <stdio.h>


int isDivisibleByBoth(int num) {

    if (num % 3 == 0 && num % 5 == 0) {
        return 1; 
    } 
    else {
        return 0;
    }
}

int main() {
    int number;

    
    printf("Enter any number: ");
    scanf("%d", &number);

   
    if (isDivisibleByBoth(number)) {
        
        printf("The given number is divisible by both 3 & 5.\n");
    } 
    else {
     
        printf("The given number is not divisible by both 3 & 5.\n");
    }

    return 0;
}
=======
#include <stdio.h>


int isDivisibleByBoth(int num) {

    if (num % 3 == 0 && num % 5 == 0) {
        return 1; 
    } 
    else {
        return 0;
    }
}

int main() {
    int number;

    
    printf("Enter any number: ");
    scanf("%d", &number);

   
    if (isDivisibleByBoth(number)) {
        
        printf("The given number is divisible by both 3 & 5.\n");
    } 
    else {
     
        printf("The given number is not divisible by both 3 & 5.\n");
    }

    return 0;
}
>>>>>>> e6b4d43af53a25c3a655be88bcbeee83068ee3bf
