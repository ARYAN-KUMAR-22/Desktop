// initializing and accessing of structure

#include <stdio.h>

struct student
{
    int roll_no;
    char name[20];
    float marks;
};

int main()
{
    struct student s1 = {
        1,
        "jenny",
        90};

    struct student s2 = {
        2,
        "jiya",
        85};

    printf("INFORMATION FOR S1 : \n");
    printf("\n %d %s %f\n", s1.roll_no, s1.name, s1.marks);
    printf("\n INFORMATION FOR S2 : \n");
    printf("\n %d %s %f \n", s2.roll_no, s2.name, s2.marks);

    struct student s3 = {
        3};

    printf("\n ENTER INFORMATION FOR S3 : \n");
    printf("\n ENTER NAME : \t");
    scanf("%s", &s3.name);
    printf("\n ENTER MARKS FOR S3 : \t");
    scanf("%f", &s3.marks);

    printf("\nHERE IS THE GIVEN INFORMATION FOR S3 : \n");
    printf("\n %d %s %f \n", s3.roll_no, s3.name, s3.marks);

    return 0;
}