#include<stdio.h>
#include<conio.h>

struct stud
{
    char name[50] ;
    int age;
    int roll_no;
    float marks;
 };

void print(char name[] , int age, int roll, float marks)
{
    printf("\n %s %d %d %0.2f",name,age,roll,marks);
}

int main()
{
    struct stud s1 = {"Nick",16,50,72.5};
    print(s1.name,s1.age,s1.roll_no,s1.marks);
}
