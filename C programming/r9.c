#include <stdio.h>

int main()
{
    int a = -11;
    int *p = &a; // NO ERROR BECAUSE *p REPRESENT THE VALUE OF THE ADDRESS OF THE VARIABLE a.
    *p = 10; // THE RESULT WILL BE 10.
    printf("%d", a);
}