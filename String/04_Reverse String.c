#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char CSrc[20] = {'\0'};
  char CDest[20] = {};
  int i = 0,j = 0;
  
  printf("\n Enter A String =>");
  gets(CSrc);
  
  while(CSrc[i] != '\0')
  {
    i++;
  }
  
  i = i - 1;
  
  while( i >= 0)
  {
    CDest[j] = CSrc[i];
    i--;
    j++;
  }
  
  CDest[j] = '\0';
  
  printf("\n Given String Is %s",CSrc);
  
  printf("\n Reverse Of Given String Is %s",CDest);
  
  
  getch();
  return 0;
  
  
  
  
}
