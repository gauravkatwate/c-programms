#include<stdio.h>
#include<conio.h>

int main()
{
    struct stud
    {
        char city[40];
        char name[80];
        int Roll_No;
        int phy;
        int maths;
        int chm;
    };

    struct stud std1;

    printf("\n Size Of Structure => %d",sizeof(struct stud));

    printf("\n Size of Steructure Object Is => %d",sizeof(std1));

    printf("\n Size Of object variable => %d",sizeof(std1.chm));


    getch();
    return 0;
}
