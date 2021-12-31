#include<stdio.h>
#include<conio.h>

int fact(int);

int main()
{
    int ino = 0,digit = 0,Add = 0,temp = 0,mult = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&temp);

    ino = temp;

    while(ino != 0)
    {
        digit = ino % 10;

        mult = 1;
        while(digit != 0)
        {
            mult = mult * digit;
            digit--;
        }

        Add = Add + mult;

        ino = ino / 10;
    }

    if(Add == temp)
    {
        printf("\nGiven Number Are Strong Number");
    }
    else
    {
        printf("\n Given Number Are Not Strong");
    }

    getch();
    return 0;
}

