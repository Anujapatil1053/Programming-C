#include <stdio.h>
#include <conio.h>

int main()
{
      int iNo1 = 1, iNo2 = 0, iNo3 = 0, Cnt = 0;
      
      printf(" \n Enter A Number => ");
      scanf(" %d ",&Cnt );
      
      while ( Cnt > 0 )
      {
        printf( " \n %d ",iNo2 );
        
        iNo3 = iNo1 + iNo2;
        iNo1 = iNo2;
        iNo2 = iNo3;
        Cnt--;
      }
      
      getch();
      
      return 0;
      
}