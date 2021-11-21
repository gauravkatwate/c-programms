#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0,Zcnt = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number => ",(i + 1));
        scanf("%d",&Arr[i]);
    }

    system("cls");

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Element Is => %d",(i + 1),Arr[i]);

        if(Arr[i] == 0)
        {
         Zcnt++;
        }
    }

    printf("\n Count Of Null Elements Is => %d",Zcnt);

    getch();
    return 0;
}
