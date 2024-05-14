// WAP TO INPUT DETAILS OF 10 STUDENTS AND PRINT IT USING STRUCTURE.

#include <stdio.h>

struct student{
    char name[20];
    int id;
    int age;
};

int main()
{
    struct student s[10];

    // TO INPUT DETAILS FROM THE USER
    for(int i = 0; i<10; i++)
    {
        printf("ENTER NAME OF STUDENT : ");
        gets(s[i].name);

        printf("ENTER ID : ");
        scanf("%d", &s[i].id);

        printf("ENTER AGE : ");
        scanf("%d", &s[i].age);

        getchar();
    }

    // TO PRINT DETAILS
    for(int i = 0; i<10; i++)
    {
        printf("\n\tNAME : ");
        puts(s[i].name);

        printf("\tID : %d", s[i].id);

        printf("\n\tAGE : %d \n\n", s[i].age);
    }

    return 0;
}