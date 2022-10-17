#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  char CSrc[50] ={'\0'};
  int i = 0,D_Cnt = 0;
  
  printf("\n Enter A String =>");
  gets(CSrc);
  
  while(CSrc[i] != '\0')
  {
    if(CSrc[i] >= '0' && CSrc[i] <= '9')
    {
      D_Cnt++;
    }
    i++;
    
    printf("\nCount Of digit In Given String is = %d",D_Cnt);
  }
  
  getch();
  return 0;
}
