#include <stdio.h>

typedef struct student {
    int rollno;
    char name[10];
    float marks;
} student;

int main()
{
    student s = {10, "aryan", 99};
    printf("%d, %s, %f", s.rollno, s.name, s.marks);

    return 0;
}