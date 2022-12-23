#include <stdio.h>

int str_length(char str[100])
{
    int len, count = 0;
    for (len = 0; str[len] != '\0'; ++len)
    {
        count++;
    }
    return count;
}

void str_concatenate(char str1[100], char str2[100], char str3[100])
{
    int i, j, l;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str3[i] = str1[i];
        l = i;
    }
    for (j = 0; str2[j] != '\0'; j++, l++)
    {
        str3[l + 1] = str2[j];
    }
    str3[l + 1] = '\0';
    printf("%s", str3);
}

void str_copy(char str1[100], char str2[100])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("%s", str2);
}

void str_compare(char str1[100], char str2[100])
{
    int i, j, flag;
    for (i = 0; str1[i] != '\0';)
    {
        i++;
    }

    for (j = 0; str2[j] != '\0';)
    {
        j++;
    }

    if (j != i)
    {
        flag = 0;
    }
    else
    {
        for (i = 0, j = 0; str1[i] != '\0', str2[j] != '\0'; i++, j++)
        {
            flag = 0;
            if (str1[i] == str2[j])
            {
                flag = 1;
            }
        }
    }

    if (flag == 0)
    {
        printf("The strings are not equal.");
    }
    else
    {
        printf("The strings are equal.");
    }
}

void str_occurence(char str1[100])
{
    int i, count = 0;
    char occurence = 'c';
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == occurence)
        {
            count++;
        }
    }
    printf("The character 'c' occurs %d times in the string.\n", count);
}

void str_substring(char str1[100], char str2[100])
{
    int i, j, c1, c2, flag;
    c1 = str_length(str1);
    c2 = str_length(str2);
    for (i = 0; i <= c1 - c2; i++)
    {
        for (j = i; j < i + c2; j++)
        {
            flag = 1;
            if (str1[j] != str2[j - i])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
            break;
    }
    if (flag == 1)
        printf("The substring exists in the string.");
    else
        printf("The substring does not exist in the string.");
}

void str_reverse(char str1[100])
{
    int i, j, len;
    char str2[100] = " ";
    len = str_length(str1);
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        str2[j] = str1[i];
    }
    str2[j] = '\0';
    printf("%s", str2);
}

void str_convert(char str1[100])
{
    int i;
    for (i = 0; str1[i] != '\0'; i++)
    {
        if (str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u' || str1[i] == 'A' || str1[i] == 'E' || str1[i] == 'I' || str1[i] == 'O' || str1[i] == 'U')
        {
            str1[i] = '*';
        }
        else
        {
            str1[i] = '#';
        }
    }
    printf("%s", str1);
}