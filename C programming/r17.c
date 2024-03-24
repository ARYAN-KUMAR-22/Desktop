#include <stdio.h>
int main()
{
    char str[10] = "umbrella";
    char *p;
    p = str;
    *p = *(p + 4);
    printf("%s", p);
    return 0;
}