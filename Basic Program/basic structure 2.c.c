#include <stdio.h>
#include<conio.h>
#include<string.h>

struct student
{
  int Roll_No;
  char Name[20];
  char Course[20];
  float Per;
  char Grade;
};

int main()
{
  struct student S1={21,"Shreya Gupta",91.666,"Artist","A"};
  
  printf("\n student detail Given = >");
  
  getch();
  
  printf("\n Roll_No : S1. Roll_No");
  printf("\n Student Name : S1. Name");
  printf("\n Percentage : S1. Percentage");
  printf("\n Course : S1. Course");
  printf("\n Grade : S1. Grade");
  
  getch();
  return 0;
}