#include <stdio.h>
#include<conio.h>

int main()
{
  int Num[5]={15,59,88,27,65};
  int *ptr=Num;
  
  printf("\n Base Address of Array is =%d",Num);
  printf("\n Value of Pointer is = %d",ptr);
  printf("\n Value of Array Element Where Pointer pointing = %d",*ptr);
  
  getch();
  
  ptr=ptr+3;
  
  
  printf("\n New  Value in Pointer = %d ",ptr);
  printf("\n Value Array Element Where pointer pointing=%d",*ptr);
  
  getch();
  return 0;
  
}