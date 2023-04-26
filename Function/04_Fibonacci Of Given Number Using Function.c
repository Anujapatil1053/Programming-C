#include <stdio.h>
#include <conio.h>

int main()
{
        int  Cnt = 0;

        printf("\n Enter A Number => ");
        scanf("%d",&Cnt);

        Fibonacci(Cnt);
        getch();
        return 0;
}
int Fibonacci(int Num)
{
       int No1 = 1, No2 = 0, No3= 0;

       while(Num > 0)
       {
            printf( " \n %d ",No2 );

            No3 = No1 + No2;
            No1 = No2;
            No2 = No3;
            Num--;
        }
        return 0;
}

