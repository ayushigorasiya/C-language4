#include <stdio.h>
main() {
    int i, j, s;
   
    printf("\n\n");
    for (i = 1; i <= 5; i++) {
        
        for (j = i; j < 5; j++) {
            printf("  "); 
        }

       
        for (s = 1; s <= i; s++) {
            printf("%d ", s);
        }

       
        for (s = i - 1; s > 0; s--) {
            printf("%d ", s);
        }

        
        printf("\n");
    }


}

