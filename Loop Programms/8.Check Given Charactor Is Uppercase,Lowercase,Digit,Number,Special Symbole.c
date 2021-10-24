#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Any Charactor => ");
    ch = getche();

    if(ch >= 'A' && ch <= 'Z')
    {
        printf("\n Given Charactor Is Uppercase Letter...");
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        printf("\n Given Charactor Is Lowercase Letter...");
    }
    else if(ch >= '0' && ch <= '9')
    {
        printf("\n Given Charactor Is Number...");
    }
    else
    {
        printf("\n Given Charactor is Special Symbole...");
    }

    getch();
    return 0;
}
