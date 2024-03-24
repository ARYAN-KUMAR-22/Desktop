#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;

    char str[50];
    int a = 10;
    char ch = 's';

    fp = fopen("r27.txt", "w");

    if(fp == NULL) 
    {
        printf("Error\n");
        exit(1);
    }

    printf("ENTER THE STRING : ");
    fgets(str, sizeof(str), stdin);
    fprintf(fp, " %d %s %c", a, str, ch);

    fclose(fp);

    return 0;
}