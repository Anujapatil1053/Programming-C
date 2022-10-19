#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
         int Age = 0;

         printf("\n\t Enter Your Age = ");
         scanf("%d",&Age);

         if(Age >= 18)
         {
               printf("\n\t You Are Eligible For Vote.");
         }
         else
         {
               printf("\n\t You Are Not Eligible For Vote.");
         }

         getch();
         return 0;
}
