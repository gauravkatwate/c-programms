#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, j = 0, ino = 0;

    printf("\n Enter Eny Number => ");
    scanf("%d",&ino);

    for(i = 1; i <= ino; i++ )
    {
        for(j = 1; j <= ino; j++)
        {
            if(i == 1 || j == 1 || i == ino || j == ino)
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
