#include <stdio.h>
#include <conio.h>

int main()
{
  int R = 0,C = 0;
  
  for( R = 1; R <= 10; R++ )
  {
    for( C = 7; C <= 12; C++)
    {
      printf( " %d " ,R * C);
    }
    
    printf("\n");
    
    getch();
    return 0;
  }
}