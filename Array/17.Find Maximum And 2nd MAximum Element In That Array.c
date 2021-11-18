#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 5

int main()
{
    int i = 0, j = 0, Max1 = 0, Max2 = 0;
    int Arr[cnt] = {};

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Element => ",(i + 1));
        scanf("%d",&Arr[i]);

        if(i == 0 || Arr[i] > Max1)
        {
            Max1 = Arr[i];
            j = i;
        }
    }
    system("cls");
    getch();

    for(i = 0; i < cnt; i++)
    {
        printf("\n Array %d Element Is => %d",(i + 1),Arr[i]);
        if(i != j)
        {
           if(i == 0 || Arr[i] > Max2 )
              {
               Max2 = Arr[i];
              }
        }
    }

    printf("\n First Maximum Element Is %d",Max1);
    printf("\n Second Maximum Element Is %d",Max2);

    getch();
    return 0;
}
