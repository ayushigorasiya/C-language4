<<<<<<< HEAD
#include <stdio.h>

int stringLength(char name[]) {
         
  
    int len = 0;

    for(int i=0; name[i]!='\0'; i++){

        len++;

    }

    return len;
}

void main() {
    char name[50]; 

  
    printf("Enter any string: ");
    
    scanf("%s",&name);

   
   
    int length = stringLength(name);

    printf("Length : %d\n", length);


}
=======
#include <stdio.h>

int stringLength(char name[]) {
         
  
    int len = 0;

    for(int i=0; name[i]!='\0'; i++){

        len++;

    }

    return len;
}

void main() {
    char name[50]; 

  
    printf("Enter any string: ");
    
    scanf("%s",&name);

   
   
    int length = stringLength(name);

    printf("Length : %d\n", length);


}
>>>>>>> e6b4d43af53a25c3a655be88bcbeee83068ee3bf
