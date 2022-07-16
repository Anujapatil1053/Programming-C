#include <stdio.h>
#include <conio.h>

int Sum(int, int);

int main()
{
  int No1=0, No2=0, Dsum=0;
  
  printf("\n Enter First Number =>");
  scanf("%d",&No1);
  
  printf("\n Enter Second Number =>");
  scanf("%d",&No2);
  
  Dsum=Sum(No1, No2);
  
  printf("\n Addition of %d+%d=%d",No1,No2,Dsum);
  
  getch();
  return 0;
}
int Sum(Num1, Num2)
{
  int Sum=0;
  
  Sum=Num1+Num2;
  
  return Sum;
}