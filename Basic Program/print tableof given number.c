#include <stdio.h>
#include <conio.h>

int main()
{
  int No = 0, Cnt = 0;
  
  printf("\n Enter A Number To Print Its Table = ");
  scanf("%d",&No);
  
  for(Cnt = 1; Cnt <= 10; Cnt++)
  {
    printf("\n %d ",Cnt*No);
  }
  getch();
  return 0;
}