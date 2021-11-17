#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main()
{
 int ArrNo[5];

 printf("\n Enter Array Elements => \n");
 scanf("%d",&ArrNo[0]);
 scanf("%d",&ArrNo[1]);
 scanf("%d",&ArrNo[2]);
 scanf("%d",&ArrNo[3]);
 scanf("%d",&ArrNo[4]);

 getch();
 system("cls");

 printf("\n Array Elements Are Given => \n %d \n %d \n %d \n %d \n %d",ArrNo[0],ArrNo[1],ArrNo[2],ArrNo[3],ArrNo[4]);

 getch();
 return 0;
}
