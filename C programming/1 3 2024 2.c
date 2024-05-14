// WAP TO INPUT A STRING AND REVERSE IT FROM A PARTICULAR INDEX ONWARDS.

#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20];

    printf("ENTER THE STRING : ");
    gets(str1);

    int length, n;
    length = strlen(str1);

    printf("ENTER INDEX : ");
    scanf("%d", &n);

    int temp;

    for(int i = n, j = length - 1; i < j; i++, j--)
    {
        temp = str1[i];
        str1[i] = str1[j];
        str1[j] = temp;
    }

    puts(str1);

    return 0;
}
