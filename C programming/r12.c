// returning a pointer ( returning a pointer means returning a address )

#include <stdio.h>

int * returnPointer(int []);

void main()
{
    int a[] = {1, 2, 3, 4, 5}, *p;
    p = returnPointer(a);
    printf("%d\n", *p);
}

int * returnPointer(int a[])
{
    a = a + 2;
    return a;
}