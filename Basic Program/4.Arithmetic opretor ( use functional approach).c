#include <stdio.h>
#include<conio.h>
int main()
{
  int No1, No2, Sum, Mul, Div, Sub, Mod;
  
  printf("\n\t Enter a 1st number=>");
  scanf("%d",&No1);
  printf("\n\t Enter a 2nd number=>");
  scanf("%d",&No2);
  
  Sum=No1+No2;
  
  printf("\n Addition of given number%d",Sum);
  
  Mul=No1*No2;
  
  printf("\n Multiplication of given number%d",Mul);
  
  Div=No1/No2;
  
  printf("\n Division of given number%d",Div);
  
  Sub=No1-No2;
  
  printf("\n Subtraction of given number%d",Sub);
  
  Mod=No1%No2;
  
  printf("\n Mod of given number%d",Mod);
  
  getch();
  return 0;
}