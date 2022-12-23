#include <stdio.h>
#include <string.h>

int main()
{
    int i;
    int len=0;
    char s1[30]= "rushil jariwala";
    len = strlen(s1);
    printf("the length of the string is: %d", len );
    printf("\n");
    for(i=0; i<len/2; i++)
    {
        // for swapping
        char ch;
        ch = s1[i];
        s1[i] = s1[len-i-1];
        s1[len-i-1] = ch;
    }
    printf("the reversed string is: %s", s1);
}
