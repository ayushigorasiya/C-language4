#include<stdio.h>

main(){
	printf("\t\n");
	int n=384 , first , last , sum=0;
	
	last = n % 10;
	

	
	while(n > 10){
		n=n/10;
	
	}
	first=n;

	
	sum = first + last;
	printf("sum of first & last is %d" , sum);
	
}