#include <stdio.h>
// Array of structures

struct student 
{
    int roll_no;
    char name[20];
    float marks;
};

void display(struct student s[3])
{
    int i;
    // for reading the details
    printf("Enter the details of the students: \n");
    for(i=0; i<3; i++)
    {
        scanf("%d %s %f", &s[i].roll_no, s[i].name , &s[i].marks);
    }
    printf("\n");
    // for printing the details
    for(i=0; i<3; i++)
    {
        printf("Roll_no: %d\n", s[i].roll_no);
        printf("Name: %s\n", s[i].name);
        printf("Marks: %f\n", s[i].marks);
        printf("\n");
    }
    
    
}
int main()
{
    struct student s[3];
    display(s);
    return 0;
}
