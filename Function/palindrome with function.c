#include <stdio.h>
#include<conio.h>

int Palindrome(int);

int main()
{
  int No=0;
  
  printf("\n Enter Any Number =>");
  scanf("%d",&No);
  
  Palindrome(No);
  
  getch();
}
int Palindrome(int Num)
{
  int Rev=0, Dig=0,No =0;
  
  No = Num;
  while(No>0)
  {
    Dig=No%10;
    Rev=(Rev*10)+Dig;
    No=No/10;
  }
  if(Num == Rev)
  {
    printf("\n Given Number is %d Palindrome",Num);
  }
  else
  {
    printf("\n Given Number is %d not palindrome",Num);
  }
  getch();
  
  return;
  
}