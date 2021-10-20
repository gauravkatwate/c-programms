#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0;
    char ch = '\0';

    printf("\n Ascii Table => \n\n");
    for(i = 1 ; i <= 127 ; i++)
    {
        printf("\n Ascii Value Of %d => %c",i,ch++);
    }
    getch();
    return 0;
}
