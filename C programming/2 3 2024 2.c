// WAP TO ADD TWO NUMBER WITH THE HELP OF POINTER.

#include <stdio.h>

int main()
{
    int n1, n2;
    int *p1, *p2;
    p1 = &n1; p2 = &n2;
    printf("ENTER TWO NUMBERS : ");
    scanf("%d %d", &*p1, &*p2);


    int sum = *p1 + *p2;

    printf("%d", sum);

    return 0;
}