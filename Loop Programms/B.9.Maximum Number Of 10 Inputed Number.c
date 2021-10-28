#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0,max = 0,i = 0;

    printf("\n Enter 10 Numbers To Get Maximum From It => ");

    for(i = 1 ; i <= 10 ; i++)
    {
        printf("\n Enter %d Number => ",i);
        scanf("%d",&ino);

        if(ino > max || i == 1)
        {
            max = ino;
        }
    }

    printf("\n Maximum Number Of Given 10 Numbers Is => %d",max);

    getch();
    return 0;
}
