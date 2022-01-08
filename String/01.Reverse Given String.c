#include<stdio.h>
#include<conio.h>
#include<stdio.h>

void revstring(char*,char*);

int main()
{
    char str[30] = "",rstr[30] = "";

    printf("\n Enter Any String =>");
    gets(str);

    revstring(str,rstr);

    printf("\n Main String => %s",str);
    printf("\n Reverse String => %s",rstr);

    getch();
    return 0;
}

void revstring(char*str, char*rstr)
{
    int i = 0, j = 0;

    while(str[i] != '\0')
    {
        i++;
    }
    i = i - 1;

    while(i >= 0)
    {
        rstr[j] = str[i];
        i--;
        j++;
    }
}
