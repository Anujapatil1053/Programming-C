#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
     char cSrc[50] = {};
     int i = 0;
     
     printf("\n Enter A string :");
     gets(cSrc);
     
     for(i = 0; i <= 0; i++)
     {
       if(cSrc[i] = '\0')
       {
         break;
       }
       
     }
     
     printf("Length Of Given String = %d",i);
     
     getch();
     return 0;
     
     
}