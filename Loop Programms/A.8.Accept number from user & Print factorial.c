#include<conio.h>
#include<conio.h>

int main()
{
    int ino = 0, fact = 1,temp = 0;

    printf("\n Enter Any Number To Get Factorial =>");
    scanf("%d",&ino);

    temp = ino;

    while(temp != 0)
    {
        fact = fact * temp;
        temp--;
    }

    printf("\n Factorial of given number is => %d",fact);

    getch();
    return 0;

}
