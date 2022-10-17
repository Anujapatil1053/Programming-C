#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
      char cSrc[50] = {'\0'};
      int Space_Cnt = 0,i = 0;
      
      printf("\n Enter A String =>");
      gets(cSrc);
      
      while(cSrc[i] != '\0')
      {
          if(cSrc[i] = ' ')
          {
            Space_Cnt++;
          }
          i++;
      }
      
      printf("\n Count Of White Space In Given String = %d",Space_Cnt);
      
      getch();
      return 0;
      
}