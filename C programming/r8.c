#include <stdio.h>

int main()
{
    int a[] = {2, 4, 3, 0, -7};
    int *p = a;
    int *q = &a[3];
    printf("q-p = %d \n", q - p);
    printf("p-q = %d \n", p - q);
    printf("value = %d\n", *q);
    q = q - 2;
    printf("value = %d and address is %d\n", *q, q);
    printf("value = %d and address is %d\n", *p, p);
    return 0;
}