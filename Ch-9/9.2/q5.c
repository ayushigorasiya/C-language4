#include <stdio.h>

//while loop
isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1;
    }
    if (year % 100 == 0) {
        return 0;
    }
    if (year % 4 == 0) {
        return 1;
    }
    return 0;
}

 main() {
    int startYear, endYear;

   
    printf("Enter the start year: ");
    scanf("%d", &startYear);

   
    printf("Enter the end year: ");
    scanf("%d", &endYear);

    
    if (startYear > endYear) {
        printf("The first number should be less than or equal to the second number.\n");
        return 1;
    }

  
    printf("Leap years between %d and %d are:\n", startYear, endYear);

    while (startYear <= endYear) {
        if (isLeapYear(startYear)) {
            printf("%d ", startYear);
        }
        startYear++; 
    }


 
}

