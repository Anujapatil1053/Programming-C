#include <stdio.h>
#include<conio.h>

int Sum_Of_Number(int);
int main()
{
  int No=0;
  
  printf("\n Enter Any Number =>");
  scanf("%d",&No);
  
  printf("Sum of Number %d",Sum_Of_Number(No));
  
  
  getch();
  return 0;
}

int Sum_Of_Number(Num)
{
  int Sum=0, Dig=0;
  
  while(Num!=0)
  {
    Dig = Num%10;
    Num = Num/10;
    Sum = Sum+Dig;
  }
  getch();
  return Sum;
  
}