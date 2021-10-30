#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0, min = 0,i = 0;

    printf("\n Enter 10 Numbers To Get Minimum Number =>");

    for(i = 1; i <= 10; i++)
    {
        printf("\n Enter %d Number =>",i);
        scanf("%d",&ino);

        if(min > ino || i == 1)
        {
            min = ino;
        }
    }


    printf("\n Minimum Number Of Given 10 Numbers Is => %d",min);
    getch();
    return 0;
}
