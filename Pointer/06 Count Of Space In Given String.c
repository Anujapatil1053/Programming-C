#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
    int i = 0, Space_Cnt = 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        if(cSrc[i] == ' ')
        {
            Space_Cnt++;
        }
        i++;

    }
     printf("\n  Count Of  Space In Given String Is = %d",Space_Cnt);

    getch();
    return 0;
}


