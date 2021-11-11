#include<stdio.h>
#include<conio.h>

int main()
{
    int r = 0, c = 0, ino = 0;

    up:

    printf("\n Enter Any Number => ");
    scanf("%d",&ino);

    if(ino % 2 == 0)
    {
       printf("\n Plese Enter Odd Number To Perfect Pattern.");
       goto up;
    }
    else
    {
        for(r = 1; r <= ino; r++)
           {
            for(c = 1; c <= ino; c++)
               {
                if(c == 1 || c == ino || r == (ino / 2) + 1)
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

    getch();
    return 0;
}
