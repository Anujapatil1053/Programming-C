#include <stdio.h>
#include <conio.h>

int main()
{
  int R=0, C=0, N=0;
  
  printf("\n Enter No of Row's & Columns => ");
  scanf("%d",&N);
  
  printf("\n\n Pattern Is => ");
  
  for(R=1;R<=N;R++)
  {
    for(C=1;C<=N;C++)
    {
      if(C==N||C==1||R==(N/2+1))
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