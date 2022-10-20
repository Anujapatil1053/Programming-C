#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char cSrc[50] = {'\0'};
  int Spl_Cnt = 0,i = 0;
  
  printf("\n Enter A String =>");
  gets(cSrc);
  
  while(cSrc[i] != '\0')
  {
    if(!(cSrc[i] >= 'A' && cSrc[i] <= 'Z') || (cSrc[i] >= 'a' && cSrc[i] <= 'z') || (cSrc[i] >= '0' && cSrc[i] <= '9'))
    {
      Spl_Cnt++;
    }
    i++;
  }
  printf("\n Count Of Capital Letter In Given String = %d",Spl_Cnt);
  
  getch();
  return 0;
}
