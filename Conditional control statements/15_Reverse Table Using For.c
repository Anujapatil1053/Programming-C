#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
       int Num = 0 ,Cnt = 0;

       printf("\n\n\t=============******************=============\n");

       printf("\n\t Enter Number To Print Its Table = ");
       scanf("%d",&Num);

       printf("\n\n\t=============******************=============\n");

       for(Cnt=10 ; Cnt>=1 ; Cnt--)
       {
             printf("\n\t %2d * %2d = %2d",Num,Cnt,Num * Cnt );
       }

       printf("\n\n\t=============*******************=============\n");
       printf("\n\t\t Thanks !!!\n");

       getch();
       return 0;
}

