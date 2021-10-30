#include<stdio.h>
#include<conio.h>

int main()
{
    int N1 = 1,N2 = 0,N3 = 0,cnt = 0;

    printf("\n Enter Till Range To Print Fibonasi Series =>");
    scanf("%d",&cnt);

    while(cnt > 0)
    {
        printf("\n %d",N3);

        N3 = N1 + N2;

        N1 = N2;
        N2 = N3;

        cnt--;
    }

    getch();
    return 0;
}
