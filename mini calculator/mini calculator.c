#include<stdio.h>
#include<conio.h>

void Switches(int);
void Addition(int, int);
void Substraction(int, int);
void Multiplication(int, int);
void Division(int, int);
void Modula(int, int);

int main()
{
    int choise = 0;

    printf("\n .....Welcome To The Mini Calculator.....");
    printf("\n\n\t Enter Your choise => \n\t\t\t1)Addition.\n\t\t\t2)Substraction.\n\t\t\t3)Multiplication.\n\t\t\t4)Division.\n\t\t\t5)Modula.\n\t\t\t6)Exit.");

    printf("\n Choise =>");
    scanf("%d",&choise);

    system("cls");

    Switches(choise);

    getch();
    return 0;
}

void Switches(int choise)
{
    int ino1 = 0, ino2 = 0;

 for(;;)
 {
 switch(choise)
 {
 case 1:
     printf("\n Enter First Number =>");
     scanf("%d",&ino1);

     printf("\n Enter Second Number =>");
     scanf("%d",&ino2);

     Addition(ino1,ino2);
    break;

 case 2:
     printf("\n Enter First Number =>");
     scanf("%d",&ino1);

     printf("\n Enter Second Number =>");
     scanf("%d",&ino2);

     Substraction(ino1,ino2);
    break;

 case 3:
     printf("\n Enter First Number =>");
     scanf("%d",&ino1);

     printf("\n Enter Second Number =>");
     scanf("%d",&ino2);

     Multiplication(ino1,ino2);
    break;

 case 4:
     printf("\n Enter First Number =>");
     scanf("%d",&ino1);

     printf("\n Enter Second Number =>");
     scanf("%d",&ino2);

     Division(ino1,ino2);
    break;

 case 5:
     printf("\n Enter First Number =>");
     scanf("%d",&ino1);

     printf("\n Enter Second Number =>");
     scanf("%d",&ino2);

     getch();

     Modula(ino1,ino2);
    break;

 case 6:
     printf("\n Thanks For Using Application...");
     return 0;
     getch();
    break;

 default:
     printf("\n Plese Enter Valid Coise...");
     getch();
    break;
 }
 break;
 getch();
 system("cls");
 }
}

void Addition(int ino1, int ino2)
{
    printf("\n Addition Of %d + %d => %d",ino1,ino2,ino1 + ino2);
    getch();
    system("cls");
    main();
}

void Substraction(int ino1, int ino2)
{
    printf("\n Substraction of %d - %d => %d",ino1,ino2,ino1 - ino2);
    getch();
    system("cls");
    main();
}

void Multiplication(int ino1, int ino2)
{
    printf("\n Multiplication of %d * %d => %d",ino1,ino2,ino1 * ino2);
    getch();
    system("cls");
    main();
}

void Division(int ino1, int ino2)
{
    printf("\n Division of %d / %d => %d",ino1,ino2,ino1 / ino2);
    getch();
    system("cls");
    main();
}

void Modula(int ino1, int ino2)
{
    printf("\n Modula Of %d % %d => %d",ino1,ino2,ino1 % ino1);
    getch();
    system("cls");
    main();
}
