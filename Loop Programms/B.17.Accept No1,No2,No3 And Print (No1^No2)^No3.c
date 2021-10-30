#include<stdio.h>
#include<conio.h>

int main()
{
    int ino1 = 0, ino2 = 0, ino3 = 0, ans = 1, t1 = 0, t2 = 0;

    printf("\n Enter First Number =>");
    scanf("%d",&ino1);

    printf("\n Enter Second Number =>");
    scanf("%d",&ino2);

    printf("\n Enter Third Number =>");
    scanf("%d",&ino3);

    t1 = ino2;
    t2 = ino3;

    while( ino2 > 0)
    {
        ans = ans * ino1;
        ino2--;
    }

    while(ino3 > 0)
    {
        ans = ans * ino1;
        ino3--;
    }

    printf("\n (%d^%d)^%d => %d",ino1,t1,t2,ans);

    getch();
    return 0;
}
