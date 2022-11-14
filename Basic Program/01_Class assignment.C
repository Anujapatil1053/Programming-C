#include <stdio.h>
#include<conio.h>
#include<stdlib.h>
#define cust_cnt 5

struct Book
{
  int Book_Id;
  char Name[40];
  char Author[40];
  float Mr_Price;
  float Discount;
  float Sale_Price;
};

int main()
{
  int i=0;
  struct Book B[cust_cnt];
  
  //Accept Book Detail
  
  printf("\n Accepting %d -> ",cust_cnt);
  
  //Loop To Accept Details 
  
  for(i=0;i<cust_cnt;i++)
  {
    B[i].Book_Id=i+101;
    
    printf("\n Enter Book Details for Book_Id No %d =>\n",i+101);
    
    fflush(stdin);
    
    printf("\n Enter Name = > ");
    gets(B[i].Name);
    
    fflush(stdin);
    
    printf("\n Enter Author= > ");
    gets(B[i].Author);
    
    fflush(stdin);
    
    B[i].Mr_Price =500;
     
    B[i].Discount=B[i].Mr_Price/10;
    
    B[i].Sale_Price=B[i].Mr_Price-B[i].Discount;
    }
    
    // Display loop 
     
    
    
    for(i=0;i<cust_cnt;i++)
    {
      printf("\n Details for Book_Id %d are => \n ",B[i].Book_Id);
      
      printf("\n Enter Name = %s",B[i].Name);
      printf("\n Author  =%s ",B[i].Author);
      printf("\n Book Price = 500");
      printf("\n Discount Allowed 10%%");
      printf("\n Sale_Price =%0.2f",B[i].Sale_Price);
    }   
    
    
    getch();
    return 0;
  
}
