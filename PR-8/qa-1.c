#include<stdio.h>

main(){

   char name[20];

   printf("Enter any name :");
   scanf("%[^\n]",&name);
   
   int len = 0;
   char *ptr = name;

   while(*ptr!='\0'){
        len++;
        ptr++;
   }

   printf("Length : %d",len);

}