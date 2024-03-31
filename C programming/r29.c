#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp = NULL;
    char str[50];

    fp = fopen("writing_name_thr_c.txt", "r");

    fgets(str, 50, fp);

    printf("%s", str);

    fclose(fp);

    return 0;
}
