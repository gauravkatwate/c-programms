#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    if(ino % 5 == 0 && ino % 7 == 0)
    {
       printf("\n Given Number Divisible Both 5 & 7");
    }
    else if(ino % 5 == 0)
    {
        printf("\n Given Number Divisible By 5 ");
    }
    else if(ino % 7 == 0)
    {
        printf("\n Given Number Divisible By 7 ");
    }
    else
    {
        printf("\n Given Number Not Divisible Both 5 & 7");
    }
    getch();
    return 0;
}
