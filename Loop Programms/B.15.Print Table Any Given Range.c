#include<stdio.h>
#include<conio.h>

int main()
{
    int SP = 0,EP = 0,i = 0,j = 0;

    printf("\n Enter Table Start Point => ");
    scanf("%d",&SP);

    printf("\n Enter Table End Point => ");
    scanf("%d",&EP);

    for(i = 1; i <= 10; i++)
    {
        for(j = SP; j <= EP; j++)
        {
            printf("%4d",i * j);
        }
        printf("\n");
    }

    getch();
    return 0;
}
