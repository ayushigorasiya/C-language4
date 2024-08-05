#include<stdio.h>


main(){

    char name[50], lastname;
    int  i, j, length = 0, palindrome = 1;

    printf("Enter The Valur Of String :-");
    gets(name);

    for(i = 0; name[i] !='\0'; i++){


        if(name[i] =='\n'){

            name[i] ='\0';

        }
    
    }
    length = i;

for(i = 0, j =length -1; i < j ; i++, j--){
    if(name[i] !=name[j]){
        palindrome =0;
    }
}


if(palindrome){
    printf("The Given String Is a Palindrom....");
}
else{
    printf("The Given String Is Not a Palindrom....");
}
    

}