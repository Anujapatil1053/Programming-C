#include<stdio.h>
#include<conio.h>

int main()
{
    char cSrc[50] = {'\0'}, cDest[50] = {'\0'};
    int i = 0, j= 0;

    printf("\n Enter A String =>");
    gets(cSrc);

    while(cSrc[i] != '\0')
    {
        i++;
    }
    i = i - 1;

    while( i >= 0)
    {
        cDest[j] = cSrc[i];
        j++;
        i--;
    }
    cDest[i] = '\0';

     printf("\n Given String Is = %s",cSrc);
     printf("\n Revese String Is = %s",cDest);

    getch();
    return 0;
}

