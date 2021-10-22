#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0;

    printf("\n Enter Eny Number To Check Even OR Odd =>");
    scanf("%d",&ino);


    if(ino == 0)
    {
        printf("\n Given Number Is Nutral...");
    }
    else if(ino / 2 == 1)
    {
        printf("\n Given Number Is Even...");
    }
    else
    {
       printf("\n Given Number Is Odd...");
    }

    getch();
    return 0;
}
