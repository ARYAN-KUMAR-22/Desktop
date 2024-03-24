#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fp = NULL;

    char str[50];
    int a = 10;
    char ch = 's';
    int i;
    fp = fopen("r26.txt", "w");

    if(fp == NULL)
    {
        printf("error");
        exit(1);
    }

    printf("ENTER THE STRING : ");
    gets(str);

    fprintf(fp,"ROLL NO IS : %d \n NAME IS : %s \n CHARACTER IS : %c\n",a,str,ch);

    fclose(fp);
}