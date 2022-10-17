#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
         int Num = 0;

         Up:
         printf("\n\t Enter Positive Integer Number = ");
         scanf("%d",&Num);

         if(Num <= 0)
         {
               printf("\n\t Invalid Number.\n\n\t Please Enter Another Number.");
               getch();
               system("cls");
               goto Up;
         }

         printf("\n\t Square Of %d = %d",Num,Num*Num);

         getch();
         return 0;
}
