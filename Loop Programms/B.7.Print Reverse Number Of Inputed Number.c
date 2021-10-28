#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0, dig = 0,rev = 0;

    printf("\n Enter Any Number To Get Reverse =>");
    scanf("%d",&ino);

    while(ino > 0)
    {
        dig = ino % 10;

        rev = (rev * 10) + dig;

        ino = ino / 10;
    }

    printf("\n Reverse Number Of Given Number Is => %d",rev);
    getch();
    return 0;
}
