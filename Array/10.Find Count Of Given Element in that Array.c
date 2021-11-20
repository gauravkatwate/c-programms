#include<stdio.h>
#include<conio.h>
#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Element => ",(i + 1));
        scanf("%d",&Arr[i]);
    }
    getch();

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Element Is => %d",(i + 1),Arr[i]);
    }

    printf("\n Total Count Of Array Elements Is => %d",i);

    getch();
    return 0;
}
