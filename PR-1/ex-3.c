#include<stdio.h>

main(){
	
	int first,second ,third;
	
	printf("enter the value of first:");
	scanf("%d" ,&first);
	
	printf("enter the value of second:");
	scanf("%d" ,&second);
	
	third = 180-(first + second);
	
	printf("%d" ,third);
}
