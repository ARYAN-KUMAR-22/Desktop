// CREATE STRUCTURE STUDENT THAT HAS NAME, ROLL, MARKS IN 5 SUBJECT, WRITE A PROGRAM TO INPUT INFORMATION OF n STUDENTS AND PRINT THEIR NAME WHOSE HIGHEST PERCENTAGE.

#include <stdio.h>

struct student {
    char name[20];
    int rn;
    int marks[5];

    int avg;
};

int main()
{
    int n;
    printf("ENTER THE NUMBER OF STUDENTS : ");
    scanf("%d", &n);

    struct student s[n];

    for(int i = 0; i<n; i++)
    {
        s[i].avg = 0;
        printf("ENTER NAME OF %d STUDENT : ", i+1 );
        getchar();
        gets(s[i].name);
        printf("ENTER ROLL : ");
        scanf("%d", &s[i].rn);

        printf("ENTER MARKS IN FIVE SUBJECT : ");
        for(int j = 0; j<5; j++)
        {
            scanf("%d", &s[i].marks[j]);
        }
        getchar();

        s[i].avg = ( s[i].marks[1] + s[i].marks[2] + s[i].marks[3] + s[i].marks[4] + s[i].marks[5] )/5;

    }

    int max = 0;
    for ( int i = 0; i<n; i++)
    {
        if(s[max].avg > s[i].avg)
        {
            max = i;
        }
    }

    printf("\n\n\nSTUDENT WITH HIGHEST PERCENTAGE IS : ");
    puts(s[max].name);


    printf("%d %d %d %d ", s[1].avg, s[2].avg, s[3].avg, s[4].avg);
}