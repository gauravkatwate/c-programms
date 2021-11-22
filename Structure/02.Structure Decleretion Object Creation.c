#include<stdio.h>
#include<conio.h>

int main()
{
    struct stud
    {
        int Roll_No;
        long long int MobNo;
        float income;
    }std1,std2;

    std2.Roll_No = 11;
    std2.MobNo = 8421016343;
    std1.income = 44500;

    printf("\n Student Roll No Is => %d",std2.Roll_No);
    printf("\n Student Phone => %lld",std2.MobNo);
    printf("\n Student Income is => %0.2f",std1.income);

    _getch();
    return 0;

}
