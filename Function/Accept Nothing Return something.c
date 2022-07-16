#include <stdio.h>
#include<conio.h>

int Add();
int main()
{
  int Sum=0;
  Add(Sum);
  getch();
  return 0;
  
}
int Add()
{
  int N1=0, N2=0, Dsum=0;
  
  printf("\n Enter Any Two Number =>");
  scanf("%d%d",&N1,&N2);
  
  Dsum=N1+N2;
  
  printf("\n Addition of%d+%d=%d",N1,N2,Dsum);
  
  getch();
  return Dsum;
}