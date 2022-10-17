#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
         int Rad = 0;
         float pi = 3.14;
         float Area = 0;

         printf("\n\t=============*******=============\n");

         printf("\n\t Enter Radius Of Circle = ");
         scanf("%d",&Rad);

         Area=pi*Rad*Rad;

         printf("\n\t Area Of Circle = %0.2f",Area);

         getch();
         return 0;
}
