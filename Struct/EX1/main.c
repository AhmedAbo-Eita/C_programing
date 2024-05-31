#include<stdio.h>
#include<string.h>

struct students {
    char name[100];
    int age;
    float GPA;
}; // this semicolone is sooo important.

int main()
{
    struct students s1;
    strcpy(s1.name, "Ahmed Aboeita");
    s1.age = 22;
    s1.GPA = 3.00;

    printf(" Name: %s \n Age: %d \n GPA:%0.2f \n", s1.name, s1.age, s1.GPA);

    return 0;
}
