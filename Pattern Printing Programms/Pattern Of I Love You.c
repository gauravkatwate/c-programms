#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void Display_I(int no)
{
    int r = 0, c = 0;
    for(r = 1; r <= no; r++)
    {
        for(c = 1; c <= no; c++)
        {
            if(r == 1 || r == no || c == (no / 2) + 1)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

void Display_Heart(int no)
{
    int r = 0, c = 0;
    for(r = 1; r <= no; r++)
    {
        for(c = 1; c <= no; c++)
        {
            if(c == 1 && r == 1 || r == 1 && c == 5 || r == 1 && c == 3 || r - c >= 3 || r + c >= 9)
            {
                printf("   ");
            }
            else
            {
                printf(" * ");
            }
        }
        printf("\n");
    }
}

void Display_U(int no)
{
    int r = 0, c = 0;

    for(r = 1; r <= no; r++)
    {
        for(c = 1; c <= no; c++)
        {
            if(c == 1 || c == no || r == no)
            {
                printf(" * ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}

int main()
{
    int ino = 0;

    printf("\n Enter only '5' To Perfect Pattern => ");
    scanf("%d",&ino);

    if(ino == 5)
    {
    Display_I(ino);
    printf("\n");

    Display_Heart(ino);

    printf("\n");
    Display_U(ino);
    }

    getch();
    return 0;
}
