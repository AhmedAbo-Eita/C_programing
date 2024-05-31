#include<stdio.h>
#include<string.h>
void grade(int x );

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
        scanf("%d", &students[i].name);

        printf("Enter the age of student number %d = ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &students[i].age);

        printf("Enter the GPA of student number %d = ", i+1);
        fflush(stdin);fflush(stdout);
        scanf("%d", &students[i].GPA);
    }

    return 0;
}

void grade(int x )
{
    if (x>=3.3)
    printf("Grade: Excelent");
    else if (3.3>x>=2.8)
    printf("Grade: Very Good");
    else if (2.8>x>2)
    printf("Grade: Good");
    else
    printf("Grade: Fail");
}
