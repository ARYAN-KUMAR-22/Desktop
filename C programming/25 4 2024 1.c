#include <stdio.h>

struct employee 
{
    char name[20];
    int age;
    int salary;
};

int main()
{
    int n;
    printf("ENTER NUMBER OF EMPLOYEE : ");
    scanf("%d", &n);

    struct employee e[n];
    printf("ENTER DETAILS \n");
    for(int i = 0; i<n; i++)
    {
        printf("ENTER NAME : ");
        getchar();
        gets(e[i].name);

        printf("ENTER AGE : ");
        scanf("%d", &e[i].age);

        printf("ENTER SALARY : ");
        scanf("%d", &e[i].salary);
    }

    int max = 0, c= 0;

    for(int i = 0; i<n; i++)
    {
        if( max < e[i].salary)
        {
            max = e[i].salary;
            c = i;
        }
    }

    printf("\nHERE IS THE DETAIL OF EMPLOYEE WITH HIGHEST SALARY :\n ");
    printf("\tNAME : ");
    puts(e[c].name);

    printf("\tAGE : %d", e[c].age);

    printf("\n\tSALARY : %d", e[c].salary);

    return 0;
}