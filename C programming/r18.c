#include<stdio.h>

 int main()
{
    char str1[20] = "hello",
         str2[10] = "hello";
    char *p, *q;
    p = str1;
    q = str2;
    p = q;
    if (p == q)
        printf("Good");
    else
        printf("bye");
    return 0;
}