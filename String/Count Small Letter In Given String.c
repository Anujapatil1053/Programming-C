#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char cSrc[50] = {'\0'};
  int Small_Cnt = 0,i = 0;
  
  printf("\n Enter A String =>");
  gets(cSrc);
  
  while(cSrc[i] != '\0')
  {
    if(cSrc[i] >= 'a' && cSrc[i] <= 'z' )
    {
      Small_Cnt++;
    }
    i++;
  }
  printf("\n Count Of Capital Letter In Given String = %d",Small_Cnt);
  
  getch();
  return 0;
}