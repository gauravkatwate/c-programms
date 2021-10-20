#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("\n Enter Charactor => ");
    scanf("%c",&ch);

    printf("\n ASCII value Of %c => %d",ch,ch);

    getch();
    return 0;
}
