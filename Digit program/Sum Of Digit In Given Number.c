#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{  
  int No =  0 , Dig = 0, Dsum = 0 , Temp = 0;
  
  printf(" \n Enter A Number => ");
  scanf( " %d ",&No );
  
  Temp = No;
  
  while(Temp > 0)
  {
    Dig = Temp % 10;
    
    Dsum = Dsum + Dig;
    
    Temp = Temp / 10;
  }
  
  printf("\n Sum Of Digit In Given Number Is  %d = %d ",No,Dsum);
  
  getch();
  
  return 0;
}