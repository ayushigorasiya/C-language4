#include<stdio.h>

main(){
	
	int score;
	
	printf("Enter the value of score :-");
	scanf("%d",&score);
	
	(score >= 91 && score<=100)
	?printf("your grade is A...")
	:
		
	(score >= 81 && score<=90)
	?printf("your grade is B...")
	:
		
	(score >= 71 && score<=80)
	?printf("your grade is C...")
	:
		
	(score >= 61 && score<=70)
	?printf("your grade is D...")
	:
		
	(score >= 51 && score<=60)
	?printf("your grade is E...")
	:
		
	(score >= 41 && score<=50)
	?printf("your grade is F...")
	:
		
	
		
	(score >= 33 && score<=40)
	?printf("sorry...! you are failed")
	:printf("");
}
