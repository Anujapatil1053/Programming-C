#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


long int Factorial ( int );

int main()
{
  int No = 0;
  
  printf (" \n Enter A Number To Find It's Factorial :\n ");
  scanf ( " %d ",&No );
  
  printf ( " \n Factorial Of Given Number %d Is = %ld ",No, Factorial ( No ));
  
  getch();
  
  return 0;
}

long int Factorial ( int Num )
{
  long int Fac = 1;
  
  Next : 
  
  if ( Num > 1 )
  {
    Fac = Fac * Num;
    Num--;
    
    goto Next;
  }
  
  return Fac;
}

