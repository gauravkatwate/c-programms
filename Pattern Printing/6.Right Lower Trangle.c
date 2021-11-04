#include<stdio.h>
#include<conio.h>

int main()
{
    int c = 0, r = 0, ino = 0;

    printf("\n Enter Any Number =>");
    scanf("%d",&ino);

    for(r = 1; r <= ino; r++)
    {
        for(c = 1; c <= ino; c++)
        {
            if( ino + 1 >= r + c)
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
    getch();
    return 0;
}
