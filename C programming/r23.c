// structure padding in c

#include <stdio.h>

struct student{
    char a;
    int b;
} s; // 8 byte will be allocated to this variable because of structure padding.

int main()
{
    printf("%d", sizeof(s));

    return 0;
}