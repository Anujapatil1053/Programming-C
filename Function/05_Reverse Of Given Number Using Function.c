#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Revs = 0;

    printf("\n Enter A Number =>");
    scanf("%d",&No);


    printf("Revrse Of Given Number Is %d = %d",No,Reverse(No));

    getch();
    return 0;
}
int Reverse(int Num)
{
    int Dig = 0, Rev = 0, Temp = 0;

    Temp = Num;

    while(Temp > 0)
    {
        Dig = Temp % 10;
        Rev = (Rev * 10)+Dig;
        Temp = Temp / 10;
    }
    return Rev;
}
