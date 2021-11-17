#include<stdio.h>
#include<conio.h>

int main()
{
    int Arr[5] = {};

    printf("\n Enter 1st Element => ");
    scanf("%d",&Arr[0]);

    printf("\n Enter 2nd Element => ");
    scanf("%d",&Arr[1]);

    printf("\n Enter 3rd Element => ");
    scanf("%d",&Arr[2]);

    printf("\n Enter 4th Element => ");
    scanf("%d",&Arr[3]);

    printf("\n Enter 5th Element => ");
    scanf("%d",&Arr[4]);

    getch();

    printf("\n Array 1st Element => %d",Arr[0]);
    printf("\n Array 2nd Element => %d",Arr[1]);
    printf("\n Array 3rd Element => %d",Arr[2]);
    printf("\n Array 4th Element => %d",Arr[3]);
    printf("\n Array 5th Element => %d",Arr[4]);

    getch();
    return 0;
}
