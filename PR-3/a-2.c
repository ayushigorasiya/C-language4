#include<stdio.h>

main(){
	
	int N , i , count=0;
	
	printf("Enter The Value Of N :-");
	scanf("%d", &N);
	
	while(N > 0){
	count++ ;
	N = N / 10;
	 
	}

printf("%d" ,count);
}