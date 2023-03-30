#include<stdio.h>
#include<conio.h>

int main()
{
    int No = 0, Cube = 0;

    printf("Enter Any Number =>");
    scanf("%d",&No);

    Cube = No*No*No;

    printf("cube Of %d = %d",No,Cube);
    getch();
    return 0;
}
