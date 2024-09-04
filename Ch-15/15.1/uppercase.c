<<<<<<< HEAD
#include<stdio.h>

main(){

   char name[20];

   printf("Enter Your Name :");
   scanf("%[^\n]",&name);


   for (int i = 0; name[i]!= '\0'; i++)
   {
        if(name[i] >='a' && name[i] <='z'){
         
          name[i]-=32;
        }
   }
       printf("NAME\t: %s",name);
      
=======
#include<stdio.h>

main(){

   char name[20];

   printf("Enter Your Name :");
   scanf("%[^\n]",&name);


   for (int i = 0; name[i]!= '\0'; i++)
   {
        if(name[i] >='a' && name[i] <='z'){
         
          name[i]-=32;
        }
   }
       printf("NAME\t: %s",name);
      
>>>>>>> e6b4d43af53a25c3a655be88bcbeee83068ee3bf
}