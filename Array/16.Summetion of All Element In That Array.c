#include<stdio.h>
#include<conio.h>

#define cnt 5
int main()
{
    int Arr[cnt]= {};
    int i = 0, sum = 0;

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter %d Element => ",(i + 1));
        scanf("%d",&Arr[i]);

        sum = sum + Arr[i];
    }

    printf("\n Sum Of Given that Array Element Is %d",sum);

    getch();
    return 0;
}
