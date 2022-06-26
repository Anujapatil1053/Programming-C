#include <stdio.h>
#include<conio.h>
int main()
{
  int No1=0, i=0;
  
  printf("\n Enter A Number = > ");
  scanf("%d",&No1);
  
  for(i=1;i<=10;i++)
  {
    printf("\n\t %d",i*No1);
  }
  getch();
  return 0 ;
}