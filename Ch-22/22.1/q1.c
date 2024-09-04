#include <stdio.h>


struct Student
{
    int stu_id;
    char stu_name[20];
    int stu_age;
    char stu_course[20];
    char stu_city[20];
    char stu_standard[10];
    char stu_school[20];
};

int main()
{

    struct Student s[3];
    printf("Enter the details of all students\n\n:");

    for (int i = 0; i < 3; i++)

    {
        printf("Enter Student ID: ");
        scanf("%d", &s[i].stu_id);
        printf("Enter Student Name: ");
        scanf(" %[^\n]", &s[i].stu_name);
        printf("Enter Student Age: ");
        scanf("%d", &s[i].stu_age);
        fflush(stdin);
        printf("Enter Student Course: ");
        scanf(" %[^\n]", &s[i].stu_course);
        printf("Enter Student City: ");
        scanf(" %[^\n]", &s[i].stu_city);
        printf("Enter Student Standard: ");
        scanf(" %[^\n]", &s[i].stu_standard);
        printf("Enter Student School: ");
        scanf(" %[^\n]", &s[i].stu_school);
        printf("\n");
    }

    printf("Details of Students :\n\n");

    for (int i = 0; i < 3; i++)
    {
        printf("Student ID: %d\n", s[i].stu_id);
        printf("Student Name: %s\n", s[i].stu_name);
        printf("Student Age: %d\n", s[i].stu_age);
        printf("Student Course: %s\n", s[i].stu_course);
        printf("Student City: %s\n", s[i].stu_city);
        printf("Student Standard: %s\n", s[i].stu_standard);
        printf("Student School: %s\n", s[i].stu_school);
        printf("\n");
    }
}