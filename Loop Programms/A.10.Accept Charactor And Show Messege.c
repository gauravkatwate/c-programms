#include<stdio.h>
#include<conio.h>

int main()
{
    char ch = '\0';

    printf("Enter Any Charactor Of Given charactors(A/a & B/b & C/c & D/d) => ");
    ch = getche();

    switch(ch)
    {
    case 'A':
    case 'a':
        printf("\n Welcome...");
        break;

    case 'B':
    case 'b':
        printf("\n Good Bye...");
        break;

    case 'C':
    case 'c':
        printf("\n Have A Nice Day...");
        break;

    case 'D':
    case 'd':
        printf("\n Good Day...");
        break;
    }
}
