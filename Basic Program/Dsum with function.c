#include <stdio.h>
#include<conio.h>
int D_Cnt(int);
int D_Sum(int);

int main()
{
                        int No = 0, Dcnt = 0, Dsum = 0;

                        printf( " \n Enter A  Number ");
                        scanf("%d",&No);

                         Dcnt=D_Cnt(No);

                         if(Dcnt==4)
                         {
                               Dsum=D_Sum(No);
                               printf("Addition Of Digit =%d",Dsum);
                         }
                         else
                         {
                               printf("\n Please Enter 4 Digit No ");
                         }
  
                           getch();
                           return 0;
                       }

                        int D_Cnt(int Num)  
                         {
                             int Dig=0;

                           while(Num>0)
                           {
                               if(Num%10)
                             {
                               Dig++;
                             }
                             Num=Num/10;
                           }
                           return Dig;
                         }
                         int D_Sum(int Num)
                         {
                           int Dsum ;
                           while(Num>0)
                           {
                             Dsum=Dsum+(Num%10);

                             Num=Num/10;
                           }
     return Dsum;
   }
   
