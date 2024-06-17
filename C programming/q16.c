// WRITE A C PROGRAM TO REVERSE A STRING

#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];

    printf("ENTER THE STRING : ");
    gets(str);

    int s = strlen(str);
    char temp;

    for( int i = 0; i<s/2; i++)
    {
        temp = str[i];
        str[i] = str[s - i - 1];
        str[s-i-1] = temp;
    }

    puts(str);

    return 0;
}