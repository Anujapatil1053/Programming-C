#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
        int Arr[7] = {'\0'}, i = 0, E_Cnt = 0;

        printf("\n\n Enter Array Elements For Finding Even Count.");
        for(i = 0; i < 7; i++)
        {
                printf("\n\n Enter %d Element = ",i+1);
                scanf("%d",&Arr[i]);
        }

        for(i = 0; i < 7; i++)
        {
                if(Arr[i] % 2 == 0 && Arr[i] > 0)
                {
                    E_Cnt++;
                }
        }
        printf("\n\n The Count Of Even Numbers in Given Array = %d",E_Cnt);

        getch();
        return 0;
}