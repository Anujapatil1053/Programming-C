#include <stdio.h>
#include<conio.h>
#include<string.h>

struct student 
{
  int Roll_No ;
  char Name[18];
  char Course[10];
  float per;
  char Grade;
};
int main()
{
  struct student std1;
  
  std1. Roll_No=15 ;
  strcpy(std1.Name,"Harry Poter");
  strcpy(std1.Course,"BBA");
  std1.per= 86.7246;
  std1.Grade='A';
  
 
 printf("\n Enter student detail = > ");
 
 getch();
 
 printf("\n Roll No : %d ",std1.Roll_No);
 printf("\n Name : %s",std1.Name);
 printf("\n Course : %s",std1.Course);
 printf("\n percentage : 0.2f",std1.per);
 printf("\n Grade  : %c",std1.Grade);
 
  
  getch();
  return 0;
}