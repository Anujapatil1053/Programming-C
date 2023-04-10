#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
    int i = 0, Spcl_Cnt = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(!(cSrc[i] >= 'A' && cSrc[i] <= 'Z'||
           cSrc[i] >= 'a' && cSrc[i] <= 'z'||
           cSrc[i] >= '0' && cSrc[i] <= '9'))
        {
            Spcl_Cnt++;
        }
        i++;

    }
     printf("\n  Count Of Special Symbol In Given String Is = %d",Spcl_Cnt);

    getch();
    return 0;
}


