#include <stdio.h>
#include<conio.h>

int main()
{
                          char name[5];
                          int roll_no  = 0;
                          char course[10];
                          char city [10];

                          printf( " \n \t Enter a Student information" );
                          printf( "\n \t====================\n" );

                          printf( "\n Enter student name\n" );
                          scanf( "%s",&name );
                          printf( "\n\t Enter a roll_no\n" );
                          scanf( "%s",&roll_no );
                          printf( "\n\t Enter a course name\n" );
                          scanf( "%s",&course );
                          printf( "\n\t Enter a city name\n" );
                          scanf( "%s",&city );

                          printf( " \n \t Enter a student details" );
                          printf( "\n \t====================\n" );

                          printf( "\n Enter a student name=%s \n",name );
                          printf( "\n Enter a roll_no =%d\n",roll_no );
                          printf( "\n Enter a course name =d\n",course );
                          printf( "\n Enter a city name=%d \n",city );

                          getch();
                          return 0;
}
