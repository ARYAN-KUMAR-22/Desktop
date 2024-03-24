// write a program to compare two string.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[30] = "aryan";
    char str2[30] = "aryaan";



    int l1 = strcmp(str1, str2);

    if(l1 == 1)
        printf("unequal");
    else
        printf("equal");

    return 0;
}