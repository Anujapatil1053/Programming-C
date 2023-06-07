#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0;

    printf("Enter Number =>");
    scanf("%d",&No);

    printf("Digit Count In Given Number Is %d = %d",No,D_Cnt(No));

    getch();
    return 0;
}
int D_Cnt(int Num)
{
    int Dcnt = 0, Temp = 0;

    Temp = Num;

    while(Temp > 0)
    {
        Temp = Temp / 10;
        Dcnt++;
    }
    return Dcnt;
}
