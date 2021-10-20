#include<stdio.h>
#include<conio.h>
int main()
{
    int ino1 = 0, ino2 = 0, temp = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    temp = ino1; //ino1 = ino1 + ino2;
    ino1 = ino2; //ino1 = ino1 - ino2;
    ino2 = temp; //ino2 = ino1 - ino2;

    printf("\n After Swapping First Number => %d",ino1);
    printf("\n After Swapping Second Number => %d",ino2);

    getch();
    return 0;
}
