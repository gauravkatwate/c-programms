#include<stdio.h>
#include<conio.h>

int main()
{
    int ino1 = 0, ino2 = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    ino1 > ino2?printf("\n Maximum Number Is => %d",ino1):printf("\n Maximum Number Is => %d",ino2);

    getch();
    return 0;
}
