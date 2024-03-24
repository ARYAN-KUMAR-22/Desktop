#include <stdio.h>

void geu(int *);

int main()

{

    int i = 10, *p = &i;

    geu(p++);
    geu(p);
    return 0;
}

void geu(int *p)

{

    printf("%d\n", *p);
}