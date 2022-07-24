#include<stdio.h>
#include<conio.h>

int main()
{
   static int i = 0, min = 0;
    int ArrMin[] = {0}, cnt = 0;;

    printf("\n Enter Count Of Numbers = >");
    scanf("%d",&cnt);

    for(i = 0; i < cnt ; i++)
    {
        printf("\n Enter %d No => ",(i + 1));
        scanf("%d",&ArrMin[i]);

        if(i == 0 || ArrMin[i] < min)
        {
            min = ArrMin[i];
        }
    }

    printf("\n Minimum Number Of Given Numbers Is %d ",min);
    getch();
    return 0;
}
