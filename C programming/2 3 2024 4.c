// WAP TO INPUT VARIABLE OF DIFFERENT DATA TYPE & POINT THEM USING POINTER AND PRINT THEIR SIZE.

#include <stdio.h>

int main()
{
    int n;
    float f;
    char c;

    void *p;

    printf("ENTER A NUMBER : ");
    scanf("%d", &n);
    p = &n;
    printf("\t%d\t", sizeof(*p));


    printf("\nENTER A FLOAT : ");
    scanf("%f", &f);
    p = &f;
    printf("\t%f\t", sizeof(*p));


    printf("\nENTER A CHARACTER : ");
    getchar();
    scanf("%c", &c);
    p = &c;
    printf("\t%c\t", sizeof(*p));

    return 0;
}