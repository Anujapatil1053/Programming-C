#include <stdio.h>

//Compiler version gcc  6.3.0

int main()
{
        int No = 0, Dig = 0, ZCnt = 0, Temp = 0;

        Up:
        printf("\n Enter Positive Integer Number To Count Of Zero = ");
        scanf("%d",&No);

        if(No <= 0)
        {
               printf("\n Invalid Number. Please Enter Positive Integer Number.");
               getch();
               system("cls");
               goto Up;
        }

        Temp = No;
        while(Temp > 0)
        {
                Dig = Temp % 10;

                if(Dig == 0)
                {
                        ZCnt++;
                }
                Temp = Temp / 10;
        }
        printf("\n Count Of Zero in %d is = %d",No,ZCnt);

        getch();
        return 0;
        
}
