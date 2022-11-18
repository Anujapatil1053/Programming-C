#include<stdio.h>
#include<conio.h>

int main()
{
    int Num = 121;

    int *p = &Num;

    printf("\n Value of Num = %d",Num);
    printf("\n Address Of Num = %d",&Num);

    printf("\n Value of p = %d",p);
    printf("\n Address Of p = %d",&p);

    printf("\n Value Of Variable");
    printf("\n To Which Pointer p Pointer i.e (*p) = %d",*p);

    getch();
    return 0;


}
