#include <stdio.h>

void main()
{
    int *p, a = 10;
    p = &a;
    *p += 1;
    printf("%d %d", *p, a);
}