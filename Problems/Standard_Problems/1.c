#include <stdio.h>
#include "mystring.h"

int main()
{
    char str1[100], str2[100], substring[100];
    char str3[100] = " ";
    printf("Enter a string: ");
    scanf("%s", str1);
    printf("The length of string is %d.\n", str_length(str1));
    printf("Enter a string to concatenate with str1:");
    scanf("%s", str2);
    printf("The string after concatenating is ");
    str_concatenate(str1, str2, str3);
    printf(".\n");
    printf("The copied string in str3 is : ");
    str_copy(str1, str3);
    printf(".\n");
    printf("After comparing str1 and str3 : ");
    str_compare(str1, str3);
    printf("\n");
    str_occurence(str1);
    printf("Enter a sub string to search in str1: ");
    scanf("%s", substring);
    str_substring(str1, substring);
    printf("\n");
    printf("The reverse of str1 is: ");
    str_reverse(str1);
    printf(".\n");
    printf("After converting all vowels with '*' and consonants with '#' str is: ");
    str_convert(str1);
    return 0;
}