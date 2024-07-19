#include<stdio.h>

main(){
	
	int BS ,HRA , DA ,TA ,hra ,ta ,da ,ans;
	
	printf("Enter THe VAlue OF BS:-");
	scanf("%d",&BS);
	
	printf("Enter THe VAlue OF HRA:-");
	scanf("%d",&HRA);
	
	printf("Enter THe VAlue OF DA:-");
	scanf("%d",&DA);
	
	printf("Enter THe VAlue OF TA:-");
	scanf("%d",&TA);
	
	hra=(BS*HRA)/100;
	da=(BS*DA)/100;
	ta=(BS*TA)/100;
	
	ans=BS+hra+da+ta;
	
	printf("%d" , ans);
	
	
}
