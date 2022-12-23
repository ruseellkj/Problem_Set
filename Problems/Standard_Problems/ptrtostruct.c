#include <stdio.h>

struct abc
{
    int a;
    char b;
    float c;
    int d;
    
};

void main()
{
    struct abc u;
    struct abc *ptr;
    ptr = &u;
    
    // accessing the members of the union
    u.a = 1;
    u.b = 97;
    u.c = 92.34;
    u.d = 5;
    
    printf("the value at a is: %d\n", ptr->a);
    printf("the value at b is: %c\n", ptr->b);
    printf("the value at c is: %f\n", ptr->c);
    printf("the value at d is: %d\n", ptr->d);

}
