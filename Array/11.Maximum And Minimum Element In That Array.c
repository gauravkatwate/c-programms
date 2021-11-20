#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0, max = 0, min = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Element => ",(i + 1));
        scanf("%d",&Arr[i]);
    }
    system("cls");
    getch();

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Element Is => %d",(i + 1),Arr[i]);
        if(i == 0 || Arr[i] > max)
        {
          max = Arr[i];
        }
        if(i == 0 || Arr[i] < min)
        {
          min = Arr[i];
        }
    }
    printf("\n Maximum Element Of Given Array Elements Is => %d",max);
    printf("\n Minimum Element Of Given Array Elements Is => %d",min);

    getch();
    return 0;


}
