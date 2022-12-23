#include <stdio.h>

struct student
{
    int roll_no;
    char name;
    float marks;
};

void main()
{
    struct abc s;
    printf("%d", sizeof(s));
}