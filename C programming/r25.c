// file handling

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;

    char str[50] = "ARYAN KUMAR" ;
    fp = fopen(" abc.txt ", "w");

    if(fp == NULL)
    {
        printf("ERROR");
        exit(1);
    }

    fputs(str, fp);

    fclose(fp);
}