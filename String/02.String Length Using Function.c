#include<stdio.h>
#include<conio.h>

int getlength(char*);

int main()
{
    char str[30] = "";

    printf("\n Enter Any String To Get Length =>");
    gets(str);

    printf("\n Given String Length Is => %d",getlength(str));

    getch();
    return 0;
}

int getlength(char*str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        i++;
    }

    return i;
}
