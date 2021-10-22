#include<stdio.h>
#include<conio.h>

int main()
{
    int ino1 = 0, ino2 = 0, ino3 = 0;

    printf("\n Enter 3 Numbers For Maximum From It =>");
    scanf("%d \n %d \n %d",&ino1,&ino2,&ino3);

    ino1 > ino2?printf("Max => %d",ino1):ino2 > ino3? printf("max => %d",ino2):printf("Max = %d",ino3);

    getch();
    return 0;
}
