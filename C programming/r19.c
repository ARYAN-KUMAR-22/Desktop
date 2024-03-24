#include <stdio.h>
int main()
{
    char *str1 = "hello",
         *str2 = "hello";
    char *p, *q;
    if (str1[0] == str2[0])
        printf("Good");
    else
        printf("bye");
    return 0;
}