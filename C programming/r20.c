#include <stdio.h>
int main()
{
    int a[] = {11, 22, 33, 44, 55}, *p;
    p = a;
    ++*p;
    printf("%d ", *p);
    p += 2;
    printf("%d ", *p);
    return 0;
}