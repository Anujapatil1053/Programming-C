#include <stdio.h>
#include <conio.h>

int main()
{
  int iNo = 0, Per = 0 , i = 1;
  
  printf ( " \n Enter A Number : \n ");
  scanf ( " %d ",&iNo );
  
  while ( iNo > i )
  {
    if ( iNo % i == 0)
    {
      
      Per = Per + i; 
    }
    i++;
    
   }
    
    if( iNo == Per )
    {
      printf ( " %d is Perfect Number ",iNo);
    }
    else
    {
      printf ( " %d is Not Perfect Number ",iNo );
    }
    
    getch();
    
    return 0;
    
  
}