#include<stdio.h>
#include<conio.h>

int main()
{
    char Src[20] = {'\0'};
    int Len = 0;

    printf("\n Enter A String =>");
    gets(Src);

    Len = StrLenX(Src);

    printf("\n Length Of Given String Is = %d",Len);

    getch();
    return 0;
}
int StrLenX(char Arr[])
{
    int Cnt = 0;

    printf("\n Size = %d.\n",sizeof(Arr));

    while(Arr[Cnt] != '\0')
    {
        Cnt++;
    }

    return Cnt;
}
