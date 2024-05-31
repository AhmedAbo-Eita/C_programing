#include<stdio.h>
#include<string.h>
void grade(float x );

int num,i;

// struct include students data
struct student {
    char name[100];
    int age;
    float GPA;
};

int main()
{
    //take numbers of students from user.
    printf("Enter number of Students = ");
    fflush(stdin);fflush(stdout);
    scanf("%d", &num);

    struct student students[num];

    // take students data from user
    for(i=0; i<num ; i++ )
    {
        printf("Enter the name of student number %d = ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%s", &students[i].name);

        printf("Enter the age of student number %d = ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &students[i].age);

        printf("Enter the GPA of student number %d = ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%f", &students[i].GPA);
    }

// print all informations about studend and his grade
    
    for(i=0 ; i<num ; i++)
    {
        printf("Name: %s Age: %d GPA: %0.2f ", students[i].name, students[i].age, students[i].GPA);
        grade(students[i].GPA);
    }

    return 0;
}

// function to calculate the grade of student 
void grade(float x )
{
    if (x >= 3.3)
    {printf("Grade: Excelent\n");}
    else if (2.8 <= x && x <3.3)
    {printf("Grade: Very Good\n");}
    else if (2 <= x && x <2.8)
    {printf("Grade: Good\n");}
    else if (x <2.0)
    printf("Grade: Fail\n");
}