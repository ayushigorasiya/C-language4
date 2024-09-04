#include <stdio.h>

main() {
    
    int x, y, ans;

    
    printf("Enter value for x: ");
    scanf("%d", &x);  // Read input as double

    printf("Enter value for y: ");
    scanf("%d", &y);  // Read input as double

    ans = (x - y) * (x - y);


    printf("Ans = %d ", ans);

    
}

