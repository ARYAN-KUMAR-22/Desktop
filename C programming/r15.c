// structure pointer 

#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s1 = {1, "jenny", 90};
    struct student *ptr = &s1;

    printf("\n INFORMATION FOR S1 : \n");
    printf("\n %d %s %f \n", ptr->roll_no, ptr->name, ptr->marks);

    return 0;
}