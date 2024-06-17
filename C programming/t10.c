#include <stdio.h>

void main()
{
    int i = 10;
    void *p  = &i;
    printf("%d", (int)*p);
}

// this will return the error. 
// void is a generic pointer type, and you cannot directly dereference it.
