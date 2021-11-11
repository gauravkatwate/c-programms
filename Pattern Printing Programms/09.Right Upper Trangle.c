#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    for(r = 0; r <= ino; r++)
    {
        for(c = 0; c <= ino; c++)
        {
            if(r <= c)
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
