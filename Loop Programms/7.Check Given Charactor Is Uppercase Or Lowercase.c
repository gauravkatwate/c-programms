#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor To Check Uppercase Or Lowercase =>");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Charactor Is Uppercase...");
    }
    else
    {
        printf("\n Given Charactor Is Lowercase...");
    }
    getch();
    return 0;
}
