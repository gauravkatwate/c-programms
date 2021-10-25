#include<conio.h>
#include<stdio.h>

void swap(int ,int);

int main()
{
    int ino1 = 0, ino2 = 0;

    printf("\n Enter First Number => ");
    scanf("%d",&ino1);

    printf("\n Enter Second Number => ");
    scanf("%d",&ino2);

    swap(ino1,ino2);

    getch();
    return 0;
}

 void swap(int no1,int no2)
{
    no1 = no1 + no2;
    no2 = no1 - no2;
    no1 = no1 - no2;

    printf("\n After Swapping First Number => %d",no1);

    printf("\n After Swapping Second Number => %d",no2);
}
