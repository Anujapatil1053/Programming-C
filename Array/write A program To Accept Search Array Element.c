#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
    int i = 0, Src_Ele = 0, Arr[7] = {};
    
    printf(" \n Enter Array Element => \n");
    
    for( i = 0; i < 7; i++ )
    {
      printf(" \n Enter %d Element  =", i + 1 );
      scanf("%d",&Arr[i]);   
    }
    
    
    getch();
    
    printf(" \n Enter  An Element To Be Searched => ");
    scanf("%d",&Src_Ele);
    
    
    for(i = 0; i < 7; i++)
    {
      if(Arr[i] == Src_Ele)
      {
        break;
      }
    }
    
    if( i < 7)
    {
      printf("\n search Element Is  Found at Location %d ",i+1);
    }
    else
    {
      printf("\n search Element Is  Not Found at Any Location");
    }
    
    getch();
    return 0;
}