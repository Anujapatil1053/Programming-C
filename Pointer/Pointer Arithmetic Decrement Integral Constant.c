#include <stdio.h>
#include <conio.h>

int main()
{
                int Num [5] = { 15, 59, 88, 27, 65 };

                int *ptr = &Num [4];

                printf( " \n Base Address Of Array Is = %d ",Num);

                printf( " \n Value In Pointer Is = %d ",ptr);

                printf( " \n Value Of Array Element Where Pointer Pointing = %d ",*ptr);

                getch();

                ptr = ptr - 3;
    

                printf( " \n  New Value In Pointer Is = %d ",ptr);

                printf( " \n Value Of Array Element Where Pointer Pointing = %d ",*ptr);
    
    
}
