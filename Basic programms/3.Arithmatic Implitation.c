#include<stdio.h>
#include<conio.h>

int Add(int,int);
int Sub(int,int);
int Mult(int,int);
int div(int,int);

int main()
{
    int ino1 = 0,ino2 = 0,choise = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    printf("\n Select Your Option =>\n\t\t\t1)Addition\n\t\t\t2)Substraction\n\t\t\t3)Multiplication\n\t\t\t4)Division\n\t\t\t5)Exit");

    printf("\n Enter Your Choise =>");
    scanf("%d",&choise);

    switch(choise)
    {
    case 1:
        printf("\n Addition Of Given Numbers Is => %d",Add(ino1,ino2));
        break;
    case 2:
        printf("\n Substraction Of Given Two Numbers Is => %d ",Sub(ino1,ino2));
        break;
    case 3:
        printf("\n Multiplication Of Give Two Number Is => %d ",Mult(ino1,ino2));
        break;
    case 4:
        printf("\n Division Of Given Two Numbers Is => %d",div(ino1,ino2));
        break;
    case 5:
        printf("\n Thanks For Using Application...");
        break;
    }
    getch();
    return 0;
}

int Add(int ino1,int ino2)
{
    return ino1+ino2;
}

int Sub(int ino1,int ino2)
{
    return ino1-ino2;
}

int Mult(int ino1,int ino2)
{
    return ino1*ino2;
}

int div(int ino1,int ino2)
{
    return ino1/ino2;
}

