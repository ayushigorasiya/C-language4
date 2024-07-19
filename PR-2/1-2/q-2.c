#include<stdio.h>

main(){
	
char grade;
int score;

printf("Enter the Score :-");
scanf("%d",&score);

		(score >=90)
			? grade = 'A'
			:
		(score >=80)
			? grade = 'B'
			:
		(score >=70)
			? grade = 'C'
			:
		(score >=60)
			? grade = 'D'
			:		
		(score >=33 && score <= 50)
			? grade = 'F'
			: printf("");
			
			
			
			switch(grade) {
				case 'A':
					printf("Your grade is A....Excellent work..!");
					break;
				case 'B':
					printf("Your grade is B....Well done..!");
					break;
				case 'C':
					printf("Your grade is C....Good job..!");
					break;
				case 'D':
					printf("Your grade is D....You passed , but you could do better..!");
					break;
				case 'F':
					printf("Your grade is F....Sorry.! but , you are failed..!");
					break;
				default:
					printf(" Enter the valid value...!");
					
			}
}
