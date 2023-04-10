#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
    int i = 0, D_Cnt = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= '0' && cSrc[i] <= '9')
        {
            D_Cnt++;
        }
        i++;

    }
     printf("\n  Count Of Digit In Given String Is = %d",D_Cnt);

    getch();
    return 0;
}

