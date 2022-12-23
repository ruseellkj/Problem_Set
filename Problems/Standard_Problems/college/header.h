#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long long int factorial(long long int num)
{
    if (num >= 1)
        return num * factorial(num - 1);
    else
        return 1;
}

long long int addition_unsigned_binary_numbers_U20CS001(long long int a, long long int b)
{
    int remainder = 0, i = 0, sum[20];
    while ((a != 0) || (b != 0))
    {
        sum[i] = ((a % 10) + (b % 10) + remainder) % 2;
        remainder = ((a % 10) + (b % 10) + remainder) / 2;
        i++;
        a /= 10;
        b /= 10;
    }

    if (remainder != 0)
        sum[i++] = remainder;

    printf("Hence the sum of two unsigned binary numbers is ");
    for (int j = (i - 1); j >= 0; j--)
    {
        printf("%d", sum[j]);
    }
    printf(".\n");
    return 0;
}

long long int bin_dec(long long int x)
{
    long long int ans = 0, reminder = 0, i = 1;
    while (x)
    {
        reminder = x % 10;
        ans += reminder * i;
        x = x / 10;
        i = i * 2;
    }
    return ans;
}

long long int dec_bin(long long int x)
{
    long long int y = x, ans = 0, p = 10, i = 1;
    ;
    long long int rem;
    while (y)
    {
        rem = y % 2;
        if (y == x)
        {
            i = 1;
        }
        else
        {
            i = 10 * i;
        }
        ans += i * rem;
        y = y / 2;
    }
    return ans;
}

void addition_signed_binary_numbers_U20CS001(char *x, char *y)
{
    int first_neg = 0, second_neg = 0;

    if (x[0] == '1')
    {
        first_neg = 1;
    }
    if (y[0] == '1')
    {
        second_neg = 1;
    }

    char s[10] = {'\0'}, p[10] = {'\0'};
    int i;
    for (i = 1; i < 8; i++)
    {
        s[i - 1] = x[i];
        p[i - 1] = y[i];
    }
    p[i] = '\0';
    s[i] = '\0';

    long long int first_dec, second_dec;
    first_dec = bin_dec(atoll(s));
    second_dec = bin_dec(atoll(p));

    if (first_neg)
    {
        first_dec = first_dec * (-1);
    }
    if (second_neg)
    {
        second_dec = second_dec * (-1);
    }

    long long int ans = first_dec + second_dec;

    printf("The sum of the two signed binary numbers is ");
    if (ans < 0)
    {
        printf("1");
        ans = ans * (-1);
    }
    else
    {
        printf("0");
    }
    printf("%lld.", dec_bin(ans));
}
