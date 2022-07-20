#include <stdio.h>
#include<conio.h>
 void sum();
 
 int main()
 {
   sum();
   
   getch();
   
   return 0;
   
 }
 void sum()
 {
   int No1 = 0, No2 = 0, Sum = 0;
   
   printf("\n Enter A Two Number ");
   scanf("%d%d",&No1,&No2,Sum);
   
   Sum = No1 + No2;
   
   printf("\n Addition of two Number %d+%d =%d ",No1, No2, Sum );
 }
