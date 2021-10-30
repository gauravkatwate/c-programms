#include<stdio.h>
#include<conio.h>

int main()
{
    int x = 0, y = 0,xy = 1,temp = 0;

    printf("\n Enter X => ");
    scanf("%d",&x);

    printf("\n Enter Y => ");
    scanf("%d",&y);

    temp = y;

    while( temp > 0)
    {
        xy = xy * x;
        temp--;
    }

    printf("\n %d^%d => %d ",x,y,xy);
}
