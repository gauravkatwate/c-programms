#include<conio.h>
#include<stdio.h>

int main()
{
    int ino = 0,i = 0;

    printf("\n Enter Any Number To Get Table => ");
    scanf("%d",&ino);

    for(i = 10; i >= 1; i-- )
    {
        printf("\n%3d * %3d => %3d",ino,i,ino * i);
    }
    getch();
    return 0;
}
