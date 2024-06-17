// WAP TO INPUT DETAILS OF N EMPLOYEES AND SORT THEM IN ASSEDING ORDER ACCORDING TO SALARY USING STRUCTURE.

#include <stdio.h>

struct employee {
    char name[20];
    int age;
    int salary;
};

int main()
{
    int n;
    printf("ENTER THE NUMBER OF EMPLOYEE : ");
    scanf("%d", &n);

    struct employee e[n];

    for(int i = 0; i<n; i++)
    {
        printf("ENTER NAME OF EMPLOYEE : ");
        getchar();
        gets(e[i].name);

        printf("ENTER AGE : ");
        scanf("%d", &e[i].age);

        printf("ENTER SALARY : ");
        scanf("%d", &e[i].salary);
    }

    int temp;

    for(int i = 0; i<n; i++)
    {
        for( int j = i; j<n; j++)
        {
            if(e[i].salary > e[j].salary)
            {
                temp = e[i].salary;
                e[i].salary = e[j].salary;
                e[j].salary = temp;
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        printf(" \tNAME : ");
        puts(e[i].name);
        printf("\tAGE : %d", e[i].age);
        printf("\n\tSALARY : %d\n", e[i].salary);
    }

    return 0;
    
}