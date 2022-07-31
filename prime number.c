#include <stdio.h>
#include <conio.h>

int main()
{
  int iNo = 0,i = 1, iCnt = 0;
  
  printf("\n Enter A Number = ");
  scanf("%d",&iNo);
  
  while(iNo >= i)
  {
    if(iNo % i == 0)
    {
      iCnt++;
    }
    i++;
  }
  
  if(iCnt == 2)
  {
    printf("\n Number is prime ");
  }
  else
  {
    printf("\n number is not prime ");
  }
  getch();
  
  return 0;
}