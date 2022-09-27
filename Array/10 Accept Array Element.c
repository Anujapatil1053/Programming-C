#include <stdio.h>


//Compiler version gcc  6.3.0

int main()
{
  int i = 0, j = 0 , Value[5] = {};
  
  for( i = 0, j = 1 ; i < 5; i++, j++)
  {
    printf("\n Enter A Element No %d => ",j);
    scanf(" %d ",&Value[i]);
  }
  
  getch();
    
  printf("\n Element Of Array Are => ");
  
  for( i = 0, j = 101; i < 5; i++,j++)
  {
    printf("\n Values Of %d Element = %d",j,Value[i]);
  }
  
  getch();
  return 0;
}