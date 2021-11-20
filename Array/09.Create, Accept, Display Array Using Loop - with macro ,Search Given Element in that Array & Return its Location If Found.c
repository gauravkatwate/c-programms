#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0, ino = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Element => ",i + 1);
        scanf("%d",&Arr[i]);
    }

    getch();

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Array Element => %d",(i + 1),Arr[i]);
    }

    getch();
    system("cls");

    printf("\n Enter Any Element To Get Location => ");
    scanf("%d",&ino);

    for(i = 0; i < cnt; i++)
    {
        if(ino == Arr[i])
        {
            printf("\n Given %d Element Location Is => %d",ino,i + 1);
        }
    }

    getch();
    return 0;
}
