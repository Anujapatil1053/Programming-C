#include<stdio.h>
#include<conio.h>

int main()
{
    char src[20] = {'\0'};
    int vcnt = 0, i = 0;

    printf("Enter A String ");
    gets(src);

    while(src[i] != '\0')
    {
        if(src[i] == 'a' || src[i] == 'e' || src[i] == 'i' || src[i] == 'o' || src[i] == 'u' || src[i] == 'A' || src[i] == 'E' || src[i] == 'I' || src[i] == 'O' ||src[i] == 'U')
        {
            vcnt++;
        }
        i++;
    }
    printf("count Of Vowel Is Given String Is %d",vcnt);

    getch();
    return 0;
}
