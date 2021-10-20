#include<stdio.h>
#include<conio.h>

int main()
{
    char Name[50]= "";
    int Roll_No = 0,Phy = 0,Chm = 0,Math = 0,Total = 0;

    printf("\n Enter Student Name => ");
    scanf("%50[^\n]",&Name);

    printf("\n Enter Student Roll No => ");
    scanf("%d",&Roll_No);

    printf("\n Enter Student Physics Marks => ");
    scanf("%d",&Phy);

    printf("\n Enter Student Chemistry Marks => ");
    scanf("%d",&Chm);

    printf("\n Enter Student Mathaematics Marks => ");
    scanf("%d",&Math);

    printf("\n Student Name => %s",Name);
    printf("\n Roll No => %d",Roll_No);
    printf("\n Marks...");
    printf("\n Physics => %d",Phy);
    printf("\n Chemistry => %d",Chm);
    printf("\n Mathematics => %d",Math);
    printf("\n Total Marks => %d",Phy+Chm+Math);

    getch();
    return 0;
}
