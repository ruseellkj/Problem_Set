#include <stdio.h>

struct student
{
    int rollno;
    char name[20];
    float marks;
};

void main()
{
    struct student s1 = {1, "Rushil", 90.91};
    struct student s2 = {5, "Tanvi", 87.34};
    
    printf("The info for s1 are as follows: \n");
    printf("roll no: %d name: %s marks: %f ", s1.rollno, s1.name, s1.marks);
    printf("\n");
    printf("The info for s2 are as follows: \n");
    printf("roll no: %d name: %s marks: %f ", s2.rollno, s2.name, s2.marks);
        
}