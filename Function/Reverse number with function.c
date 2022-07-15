#include <stdio.h>
#include<conio.h>

int Reverse_Number(int);
int main()
{
  int No=0;
  
  printf("\n Enter Any Number =>");
  scanf("%d",&No);
  
  printf("Reverse of Given No %d",Reverse_Number(No));
  getch();
  return 0;
  
}

int Reverse_Number(Num)  
{
  int Rev=0, Dig=0;
  
   while(Num!=0)
  {
    Dig=Num%10;
    Num=Num/10;
    Rev=(Rev*10)+Dig;
  }
  
  
  getch();
  return Rev;
}  
