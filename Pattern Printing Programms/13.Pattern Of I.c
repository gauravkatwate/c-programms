#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, ino = 0;

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    for(r = 1; r <= ino; r++)
    {
        for(c = 1; c <= ino; c++)
        {
            if(r == 1 || r == ino || c == (ino / 2) + 1)
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
