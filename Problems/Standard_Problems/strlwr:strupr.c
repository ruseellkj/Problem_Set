#include <stdio.h>
#include <string.h>


int main()
{
    int i;
    char s1[30];
    printf("enter your name: \n");
    gets(s1);
    
    for(i=0; s1[i]!='\0'; i++)
    {
        if(s1[i]>=65 && s1[i]<=90)
        {
            s1[i] = s1[i] + 32;
        }
    }
    printf("the lowercased string is: %s", s1);
}