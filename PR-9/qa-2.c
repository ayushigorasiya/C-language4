#include <stdio.h>


struct Student {
    int roll_No;
    char name[50];
    int chem_marks;
    int maths_marks;
    int phy_marks;
};

    float calculate_percentage(int total_marks) {
    return (float)total_marks / 300 * 100;
    }

void main() {
	
	int size;
	printf("enter number of student:");
	scanf("%d",&size);
	
    struct Student students[size];
    int i;

    for (i = 0; i <size; i++) {
       
        printf("Roll no ==> ");
        scanf("%d", &students[i].roll_No);
        printf("Name ==> ");
        scanf("%s", students[i].name);
        printf("Chemistry ==> ");
        scanf("%d", &students[i].chem_marks);
        printf("Mathematics ==> ");
        scanf("%d", &students[i].maths_marks);
        printf("Physics ==> ");
        scanf("%d", &students[i].phy_marks);
        printf("\n");
    }

    for (i = 0; i < size; i++) {
        int total_marks = students[i].chem_marks + students[i].maths_marks + students[i].phy_marks;
        float percentage = calculate_percentage(total_marks);


        printf("%s (%d)\n", students[i].name, students[i].roll_No);
        printf("Chemistry : %d\n", students[i].chem_marks);
        printf("Mathematics : %d\n", students[i].maths_marks);
        printf("Physics : %d\n", students[i].phy_marks);
        printf("Total : %d/300\n", total_marks);
        printf("Percent : %.2f%%\n", percentage);
        printf("\n");
    }
}