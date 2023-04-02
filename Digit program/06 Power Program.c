#include<stdio.h>
#include<conio.h>

int main()
{
    int  i = 0, No1 = 0, No2 = 0, Res = 1;

    printf("Enter Two Number");
    scanf("%d%d",&No1,&No2);

    for(i = 1; i <= No2; i++)
    {
        Res = Res * No1;
    }
    printf(" Given Number Is Power %d",Res);
    getch();
    return 0;
}
