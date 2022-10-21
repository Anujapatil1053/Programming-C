#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
         int  S_No = 0, E_No = 0;

         printf("\n\t=============*******=============\n");

         printf("\n\t Enter Starting Number = ");
         scanf("%d",&S_No);

         printf("\n\t Enter Ending Number = ");
         scanf("%d",&E_No);

         while(S_No <= E_No)
         {
                 if(S_No % 2 != 0)
                 {
                       printf("\n\t %d",S_No);
                 }
                 S_No++;
         }

         printf("\n\t=============*******=============\n");

         getch();
         return 0;
         
}
