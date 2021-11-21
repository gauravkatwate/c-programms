#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0,Ocnt = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Number => ",(i + 1));
        scanf("%d",&Arr[i]);
    }

    system("cls");

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Element Is => %d",(i + 1),Arr[i]);

        if(Arr[i] % 2 != 0)
        {
            Ocnt++;
        }
    }

    printf("\n Count Of Odd Elements Is => %d",Ocnt);

    getch();
    return 0;
}
