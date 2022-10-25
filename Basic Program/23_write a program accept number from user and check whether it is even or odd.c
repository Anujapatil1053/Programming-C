#include <stdio.h>
#include <conio.h>

int main()
{
  int No=0;
  
  printf (" \n Enter Any Number = >" );
  scanf ( " %d ",&No );
  
  if ( No % 2 == 0 )
  {
    printf( "\n  Given Number is Even " );
    
  }
  
  {
    printf( " Given Number is Odd " );
  }
  
  getch(); 
  return 0;
}
