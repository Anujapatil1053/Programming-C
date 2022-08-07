#include<stdio.h>
#include<conio.h>
int main()
{
  int r = 0,  c = 0, n = 0;
  printf(" \n\n Enter No  of Rows & Column Count=" );
  scanf( "%d",&n );
  printf(" \n\n\t pattern is =>\n\n" );
  for ( r = 1; r <= n; r++ )
  {
    for( c = 1; c <= n; c++ )
    {
      if ( r==1 || c == 1 || c == 1 || r == (n/2+1))
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