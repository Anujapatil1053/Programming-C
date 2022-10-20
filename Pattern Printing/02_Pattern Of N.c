#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
  int R  = 0, C = 0, Cnt = 0;
  
  printf(" \n Enter No. Of Rows &  Column ");
  scanf( " %d ",&Cnt );
  
  for( R = 1; R <= Cnt; R++ )
  {
    for( C = 1; C <= Cnt; C++ )
    {
      if(C == 1|| R == C || C == Cnt  )
      {
        printf(" * ");
        
      }
      else
      {
        printf("   ");
      }
    }
    printf("\n");
  }
   
   getch();
   
   return 0;
}