#include <stdio.h>

void test(int *a, int *b)
{
    a = b;
    *a = 15;
}
int x = 10, y = 20;

int main()
{
    test(&x, &y);
    printf("%d %d",x, y);
    return 0;
}