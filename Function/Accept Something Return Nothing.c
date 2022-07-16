#include <stdio.h>
#include<conio.h>

void Sum(int,int);

int main()
{
  int No1=0, No2=0;
  
  printf("\n Enter First Number =>");
  scanf("%d",&No1);
  
  printf("\n Enter Second Number =>");
  scanf("%d",&No2);
  
  Sum(No1, No2);
  
  getch();
  return 0;
}
void Sum(int Num1, int Num2)
{
  int Dsum=0;
  
  Dsum=Num1+Num2;
  
  printf("\n Addition of %d+%d=%d",Num1,Num2,Dsum);
  
  getch();
  
  
}


  
