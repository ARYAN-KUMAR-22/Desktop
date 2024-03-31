#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[50];
    
    fp = fopen("writing_name_thr_c.txt", "w");

    printf("ENTER YOUR NAME : ");
    gets(str);

    fprintf( fp, "%s", str);

    fclose(fp);

    return 0;
}