// WAP TO INPUT DATA OF 3 PERSON & THEN DISPLAY DETAILS OF PERSON WITH LONGEST NAME.

#include <stdio.h>
#include <string.h>

struct data {
    char name[20];
    int age;
    int salary;
};

int main()
{
    struct data p[3];

    for(int i = 0; i<3; i++)
    {
        printf("ENTER NAME : ");
        getchar();
        gets(p[i].name);

        printf("ENTER AGE : ");
        scanf("%d", &p[i].age);

        printf("ENTER SALARY : ");
        scanf("%d", &p[i].salary);
    }

    int max = 0;

    for(int i = 0; i<3; i++)
    {
        if(strlen(p[max].name) < strlen(p[i].name))
        {
            max = i;
        }
    }

    printf("HERE IS THE DETAIL : \n");
    printf("\tNAME : ");
    puts(p[max].name);

    printf("\tAGE : %d", p[max].age);
    printf("\tSALARY : %d", p[max].salary);

    return 0;
}