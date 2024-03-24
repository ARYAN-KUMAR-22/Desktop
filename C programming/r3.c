#include <stdio.h>
#include <string.h>

int main()
{
    char name[30];
    printf("ENTER NAME : ");
    gets(name);

    printf("%.5s\n", name);
    printf("%10.5s\n", name);
    printf("%s\n", &name[3]);

    puts(name);

    return 0;
}