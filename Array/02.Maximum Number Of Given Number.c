#include<stdio.h>
#include<conio.h>

int main()
{
    int i = 0, cnt = 0,max = 0;
    int ArrNo[] = {0};

    printf("\n Enter Count Of Numbers => ");
    scanf("%d",&cnt);

    for(i = 0; i < cnt; i++)
    {
        printf("\n Enter No %d =>",i + 1);
        scanf("%d",&ArrNo[i]);

        if(i == 0 || ArrNo[i] > max)
        {
            max = ArrNo[i];
        }

    }

    printf("\n Maximum Number Of Given Numbers => %d",max);

    getch();
    return 0;
}
