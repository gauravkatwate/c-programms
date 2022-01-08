#include<stdio.h>
#include<conio.h>

void copystring(char*,char*);

int main()
{
    char str[30] = "" , cstr[30] = "";

    printf("\n Enter Any String =>");
    gets(str);

    copystring(str,cstr);

    printf("\n Main String => %s",str);
    printf("\n Copy String => %s",cstr);

    getch();
    return 0;
}

void copystring(char*str,char*cstr)
{
    int i = 0;

    while(str[i] != '\0')
    {
        cstr[i] = str[i];
        i++;
    }
}
