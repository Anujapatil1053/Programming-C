#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char cSrc[50] = {'\0'};
  int Cap_Cnt = 0,i = 0;
  
  printf("\n Enter A String =>");
  gets(cSrc);
  
  while(cSrc[i] != '\0')
  {
    if(cSrc[i] >=65 && cSrc[i] <= 90 )
    {
      Cap_Cnt++;
    }
    i++;
  }
  printf("\n Count Of Capital Letter In Given String = %d",Cap_Cnt);
  
  getch();
  return 0;
}
