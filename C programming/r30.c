#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char ch;

    fp = fopen("writing_name_thr_c.txt", "r");

    while(!feof(fp))// fgets function reads one line only. If you want to read multiple lines use this method.
    {
        ch = fgetc(fp);
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}