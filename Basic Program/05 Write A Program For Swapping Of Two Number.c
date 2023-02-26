#include<stdio.h>
#include<conio.h>

int main()
{
    int No1 = 0, No2 = 0;

    printf("Enter A First Number => ");
    scanf("%d",&No1);

    printf("Enter A Second Number => ");
    scanf("%d",&No2);

    No1 = No2 + No1;
    No2 = No1 - No2;
    No1 = No1 - No2;

    printf("\n\t After Swapping Number");

    printf("\n\t No1 Is = %d",No1);
    printf("\n\t No2 Is = %d",No2);

    getch();
    return 0;


}
