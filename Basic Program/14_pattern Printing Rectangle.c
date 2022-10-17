#include <stdio.h>
#include <conio.h>

int main()
{
  int r=0, c=0, N=0;
  
  printf("\n Enter No of Rows & Column Count => ");
  scanf("%d",&N);
  
  printf("\n\n\t Pattern Is = > \n\n");
  
  for( r=1;r<=N;r++ )
  {
    for(c=1;c<=N;c++)
    {
      if(r==1||c==1||r==N||c==N)
      {
        printf("*");
      }
      else
      {
        printf(" ");
      }
    }
    printf("\n");
  }
  getch();
  return 0;
  
}
