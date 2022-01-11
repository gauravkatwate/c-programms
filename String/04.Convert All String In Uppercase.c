#include<stdio.h>
#include<conio.h>

int main()
{
    char str[20];

    printf("\n Enter Any String =>");
    scanf("%[^\n]",str);

    Convert_Upper(str);

    printf("Converted String Is => %s",str);

    getch();
    return 0;
}

void Convert_Upper(char*str)
{
    int i = 0;

    while(str[i] != '\0')
    {
        if(str[i] >= 65 && str[i] <= 90)
        {
            i++;
        }
        else if(str[i] >= 97 && str[i] <= 122)
        {
            str[i] = str[i] - 32;
        }
        else if(str[i] == 32)
        {
            i++;
        }
    }
}


