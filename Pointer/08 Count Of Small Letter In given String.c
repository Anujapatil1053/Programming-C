#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
    int i = 0, Small_Cnt = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] >= 'a' && cSrc[i] <= 'z')
        {
            Small_Cnt++;
        }
        i++;

    }
     printf("\n  Count Of Capital letter In Given String Is = %d",Small_Cnt);

    getch();
    return 0;
}


