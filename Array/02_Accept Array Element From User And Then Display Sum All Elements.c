#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
      int i = 0, Bill_Sum = 0, Bill[4] = {0};
      
      for( i = 0; i < 4; i++ )
      {
        printf(" \n Enter Bill No %d =  ",(i + 1));
        scanf(" %d ",&Bill[i]);
        
        Bill_Sum = Bill_Sum + Bill[i];
      }
      
      getch();
      
      printf(" \n Bill Generated Today => \n ");
      
      for( i = 0; i < 4; i++)
      {
        printf(" \n Amount In Bill No %d = %d \n",( i + 1001), Bill[i]);
      }
      
      printf(" \n =================************================\n\n");
      
      printf(" \n Total Amount Received Today = %d.\n",Bill_Sum);
      
      
      printf(" \n =================************================\n");
      
      getch();
      
      return 0;
}
