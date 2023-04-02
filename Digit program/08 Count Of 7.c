#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cnt_Of_7 = 0, Dig = 0, Temp = 0;

    printf("Enter Number =>");
    scanf("%d",&No);

    Temp = No;

    while(Temp > 0)
    {
        Dig = Temp % 10;

        if(Dig == 7)
        {
            Cnt_Of_7++;
        }
        Temp = Temp / 10;
    }
    printf(" Count Of 7 Is %d = %d",No,Cnt_Of_7);

    getch();
    return 0;
}
