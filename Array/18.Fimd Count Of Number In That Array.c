#include<stdio.h>
#include<conio.h>

#define cnt 5

int main()
{
    int Arr[cnt] = {};
    int i = 0, ino = 0, count = 0;

    for(i = 0; i < cnt; i++)
    {
       printf("\n Enter %d Element => ",(i + 1));
       scanf("%d",&Arr[i]);
    }

    printf("\n Enter Element To Get Count => ");
    scanf("%d",&ino);

    for(i = 0; i < cnt; i++)
    {
        if(ino == Arr[i])
        {
            count++;
        }
    }
    
    printf("\n Count Of %d is %d Times.",ino,count);

    getch();
    return 0;
}
