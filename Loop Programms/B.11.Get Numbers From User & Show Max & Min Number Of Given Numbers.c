#include<stdio.h>
#include<conio.h>

int main()
{
    int ino = 0,max = 0,min = 0,cnt = 0,i = 0;

    printf("\n Enter Count Of Number =>");
    scanf("%d",&cnt);

    for(i = 1; i <= cnt; i++ )
    {
        printf("\n Enter %d Number =>",i);
        scanf("%d",&ino);

        if(ino > max || i == 1)
        {
            max = ino;
        }
        if(ino < min||i == 1)
        {
            min = ino;
        }
    }

    printf("\n Maximum Number Of Given Number is => %d",max);
    printf("\n Minimum number of Given Number is => %d",min);

    getch();
    return 0;
}
