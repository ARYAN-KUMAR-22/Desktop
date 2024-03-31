// APPEND MODE IN FILE HANDLING

#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    fp = fopen("writing_name_thr_c.txt", "a");

    printf("ENTER ANOTHER NAME TO APPEND : ");
    gets(str);

    fprintf(fp, "\n%s", str); // HERE WE CAN ALSO USE fputs(str, fp)

    fclose(fp);

    return 0;
}