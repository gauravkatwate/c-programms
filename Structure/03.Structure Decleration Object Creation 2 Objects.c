#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>

    struct stud
    {
        int Roll_No;
        long long int Mob;
        char Name[40];
        float income;
    }std1,std2;

int main()
{
    std1.Roll_No = 11;
    std1.Mob = 8421016343;
    strcpy(std1.Name,"Gaurav Rajaram Katwate");
    std1.income = 2222;

    printf("\n Enter Student Roll No => ");
    scanf("%d",&std2.Roll_No);

    printf("\n Enter Student Name => ");
    gets(std2.Name);
    scanf("%[^\n]",&std2.Name);

    printf("\n Enter Student Mobile => ");
    scanf("%lld",&std2.Mob);

    printf("\n Enter Student Income => ");
    scanf("%f",&std2.income);

    system("cls");

    printf("\n First Student Information => \n");
    printf("\n Student Roll No => %d",std1.Roll_No);
    printf("\n Student Name => %s",std1.Name);
    printf("\n Student Mob => %lld",std1.Mob);
    printf("\n Student income => %0.2f\n",std1.income);

    printf("\n Second Student Information => \n");
    printf("\n Student Roll No => %d",std2.Roll_No);
    printf("\n Student Name => %s",std2.Name);
    printf("\n Student Mob => %lld",std2.Mob);
    printf("\n Student income => %0.2f",std2.income);

    getch();
    return 0;

}
