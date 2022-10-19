#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
         int Num = 0;

         printf("\n Enter Your Number = ");
         scanf("%d",&Num);

         if(Num%2 == 0)
         {
               printf("\n\t %d is Even",Num);
         }
         else
         {
               printf("\n\t %d is Odd",Num);
         }

         getch();
         return 0;
}