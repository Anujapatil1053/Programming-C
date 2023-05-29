#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0,No2 = 0;

    printf("Enter Two Number");
    scanf("%d%d",&No1,&No2);


    printf(" Power Of given Number Is %d.",power(No1,No2));
    getch();
    return 0;

}
int power(int Num1,int Num2)
{
    int i = 0,Res =1;

    for(i = 1;i <= Num2; i++)
    {
        Res = Res * Num1;
    }
    return Res;
}
