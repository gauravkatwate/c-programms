#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0, sum = 0,Digit = 0,temp = 0;

    printf("\n Enter Any Digit Number To Compute Sum => ");
    scanf("%d",&ino);

    temp = ino;

    while(temp != 0)
    {
     Digit = temp % 10;
     sum = sum + Digit;
     temp = temp/10;
    }

    printf("\n Sum Of Given Any Digit NUmber Is => %d",sum);

    getch();
    return 0;
}
