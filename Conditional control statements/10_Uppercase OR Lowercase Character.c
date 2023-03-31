#include <stdio.h>
#include <conio.h>

//Compiler version gcc  6.3.0

int main()
{
         char Ch = '\0';

         printf("\n Enter Your Character = ");
         scanf("%c",&Ch);

         if(Ch >= 'A' && Ch <= 'Z')
         {
               printf("\n %c is Uppercase Letter",Ch);
         }
         else if(Ch >= 'a' && Ch <= 'z')
         {
               printf("\n %c is Lowercase Letter",Ch);
         }
         else
         {
               printf("\n Invalid Letter");
         }

         getch();
         return 0;
}
