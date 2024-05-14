// WAP TO INPUT DETAILS OF A STUDENT AND PRINT IT USING STRUCTURE.

#include <stdio.h>

struct student {
    int id;
    char name[20];
    int age;
};

int main()
{
    struct student s;
    printf("ENTER NAME OF STUDENT : ");
    gets(s.name);

    printf("ENTER ID : ");
    scanf("%d", &s.id);

    printf("ENTER AGE : ");
    scanf("%d", &s.age);

    printf("\nHERE IS THE DETAILS YOU ENETERED : \n\n");
    printf("\t NAME : ");
    puts(s.name);
    printf("\t ID : %d", s.id);
    printf("\n\t AGE : %d\n", s.age);


    return 0;
}