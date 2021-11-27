#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 2

int main()
{
    struct stud
    {
        char Name[80];
        char city[40];
        int Roll_No;
        long long int Mob_No;
        float marks;
    };

    int i = 0, RN = 0;
    struct stud std[cnt];

    for(i = 0; i < cnt; i++)
    {
        printf("\n %d Student Detailes => ", i + 101);
        std[i].Roll_No = i + 101;

        fflush(stdin);

        printf("\n Enter Student Name =>");
        scanf("%[^\n]",&std[i].Name);

        fflush(stdin);

        printf("\n Enter Student City =>");
        scanf("%[^\n]",&std[i].city);

        printf("\n Enter Student Mob No =>");
        scanf("%lld",&std[i].Mob_No);

        printf("\n Enter Student Marks =>");
        scanf("%f",&std[i].marks);
    }

    system("cls");

    printf("\n Enter Roll No To Search Student Detailes => ");
    scanf("%d",&RN);

    for( i = 0 ; i < cnt; i++)
    {
        if(RN == std[i].Roll_No)
        {
        printf("\n %d Student Detailes =>",std[i].Roll_No);
        printf("\n Name   => %s",std[i].Name);
        printf("\n City   => %s",std[i].city);
        printf("\n Mobile => %lld",std[i].Mob_No);
        printf("\n Marks  => %0.2f \n\n",std[i].marks);
        }
    }
}
