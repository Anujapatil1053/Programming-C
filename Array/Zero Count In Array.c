#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
        int Arr[7] = {'\0'}, i = 0, Z_Cnt = 0;

        printf("\n\n Enter Array Elements For Finding Zero Count.");
        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 7; i++)
        {
                if(Arr[i] == 0)
                {
                    Z_Cnt++;
                }
        }
        printf("\n\n The Count Of Zero in Given Array = %d",Z_Cnt);

        getch();
        return 0;

}