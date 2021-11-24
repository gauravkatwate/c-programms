#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#define cnt 2

struct stud
{
   int Roll_No;
   char Name[80];
   long long int Mob;
   float Sallary;
};

int main()
{
    int i = 0;
     struct stud std[cnt];

     for(i = 0; i < cnt; i++)
     {
         printf("\n Enter Student Roll No => ");
         scanf("%d",&std[i].Roll_No);

         printf("\n Enter Student Name => ");
         gets(std[i].Name);
         scanf("%[^\n]",&std[i].Name);

         printf("\n Enter Student Mobile => ");
         scanf("%lld",&std[i].Mob);

         printf("\n Enter Studen Sallary => ");
         scanf("%f",&std[i].Sallary);
     }
     system("cls");

     for(i = 0; i < cnt; i++)
     {
         printf("\n Student Roll No => %d",std[i].Roll_No);
         printf("\n Student Name => %s",std[i].Name);
         printf("\n Student Mobile No => %lld",std[i].Mob);
         printf("\n Student Sallary => %0.2f",std[i].Sallary);
     }
}
