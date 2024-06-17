#include <stdio.h>

char *myfunc(char*p)
{
    p+=3;
    return p;
}

void main()
{
    char *x, *y;
    x = "AYURVEDA";
    y = myfunc(x);
    printf("%s", y);
}