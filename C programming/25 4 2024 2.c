// WAP TO DEFINE STRUCTURE STUDENT WITH ROLL NO., MARKS IN SUBJECT & CALCULATE THEIR AVERAGE.

#include <stdio.h>

struct student{
    char name[20];
    int rn;
    int m[5];
    int avg;
};

int main()
{
    struct student s;

    printf("ENTER NAME OF STUDENT : ");
    gets(s.name);

    printf("ENTER ROLL NO. : ");
    scanf("%d", &s.rn);

    printf("ENTER MARKS IN 5 SUBJECT : ");
    scanf("%d %d %d %d %d", &s.m[1], &s.m[2], &s.m[3], &s.m[4], &s.m[5]);

    s.avg = (s.m[1] + s.m[2] + s.m[3] + s.m[4] + s.m[5])/5;

    printf("THE AVERAGE IS %d", s.avg);

    return 0;
}