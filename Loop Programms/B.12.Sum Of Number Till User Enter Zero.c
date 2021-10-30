#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0,sum = 0,i = 0;

    for(i = 1; ; i++)
    {
        printf("\n Enter %d Number => ",i);
        scanf("%d",&ino);

        if(ino <= 0 )
        {
          printf("\n Sum of Given Number Is => %d",sum);
          break;
        }

        sum = sum + ino;
    }
    getch();
    return 0;
}
