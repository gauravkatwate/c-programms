#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0, dig = 0,Ecnt = 0, Ocnt = 0;

    printf("\n Enter Any Number To Dig Count =>");
    scanf("%d",&ino);

    while(ino > 0)
    {
        dig = ino % 10;

        if(dig % 2 == 0 )
        {
            Ecnt++;
        }
        else
        {
            Ocnt++;
        }
        ino = ino / 10;
    }

    printf("\n Even Count Of Given Number DigitS Is => %d",Ecnt);
    printf("\n Odd Count Of Given Number Digits Is => %d",Ocnt);

    getch();
    return 0;
}
