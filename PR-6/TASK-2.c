#include<stdio.h>

main(){

    char Name[20];
    int Freq [256] = {0};

    int i;

    printf("Enter The Value Of String :-");
    gets(Name);

    for (i = 0; Name[i] !='\0'; i++){
        if ( Name[i] !='\n'){
            Freq[Name[i]]++;
        }
    }

    printf("Frequency of Each Word :-\n");
    for(i = 0; i < 256; i++){
        if( Freq[i] > 0) {
            printf("%c = %d\n", i, Freq[i]);
        }
    }

}