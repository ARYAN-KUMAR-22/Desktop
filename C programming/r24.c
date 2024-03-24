// structure packing in c

// if we don't want structure padding/ memory slignment. we do structure packing.


#include <stdio.h>

#pragma pack(1) // this will turn on the structure packing feature.

struct student{
    char a;
    int b;
} s; // 8 byte will be allocated to this variable because of structure padding.

int main()
{
    printf("%d", sizeof(s));

    return 0;
}