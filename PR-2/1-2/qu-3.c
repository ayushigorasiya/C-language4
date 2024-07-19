#include <stdio.h>

main(){
	
int score;

printf("Enter your score :-");
scanf("%d", &score);

if (score>=90) {
	printf(" Your grade is A.....Excellent work! you are eligible for the next exam...\n");
}
else if (score>=80) {
	printf("Your grade is A.....Excellent work! you are eligible for the next exam...\n");
}

else if (score>=70) {
	printf("Your grade is C.....Congratulations! you are eligible for the next exam...\n");
}

else if (score>=60) {
	printf("Your grade is D.....Congratulations! you are eligible for the next exam...\n");
}

else if (score<=59) {
	printf("Your grade is F.....Sorry! , please try again next time..\n");
}
else{
	printf("Enter The Valid Grade..\n");
}	
}
