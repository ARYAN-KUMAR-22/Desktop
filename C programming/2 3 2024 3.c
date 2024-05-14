// WAP TO SWAP TWO NUMBER WITH THE HELP OF POINTER.

#include <stdio.h>

int main()
{
    int n1, n2;
    printf("ENTER TWO NUMBERS ; ");
    scanf("%d %d", &n1, &n2);

    int *p1, *p2;
    p1 = &n1;
    p2 = &n2;

    int temp;
    temp = *p1;
    *p1 = *p2;
    *p2 = temp;

    printf("THE SWAPED NUMBERS ARE : %d\t%d", n1, n2);

    return 0;
}