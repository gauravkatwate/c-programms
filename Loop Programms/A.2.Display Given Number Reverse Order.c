#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0, Digit = 0, rev = 0;

    printf("\n Enter Number To Get Reverse => ");
    scanf("%d",&ino);

    while(ino != 0)
    {
        Digit = ino % 10;
        rev = (rev * 10)+Digit;
        ino = ino / 10;
    }

    printf("\n Reverse Number Is => %d",rev);

    getch();
    return 0;
}
