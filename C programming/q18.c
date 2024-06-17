#include <stdio.h>
#include <string.h>

int noad( char str[], int size, int *alphabet, int *digit);

int main()
{
    char str[50];
    printf("ENTER THE STRING : ");
    gets(str);
    int alphabet = 0, digits = 0;

    int s = strlen(str);

    noad(str, s, &alphabet, &digits);

    printf("NUMBER OF ALPHABETS : %d \nNUMBER OF DIGITS : %d", alphabet, digits);

    return 0;
}

int noad(char str[], int size, int *alphabet, int *digits)
{
    for ( int i = 0; i<size; i++)
    {
        if(str[i] >= 'A' && str[i] <= 'Z' || str[i] >= 'a' && str[i] <= 'z')
            (*alphabet)++;
        else if(str[i] >= '0' && str[i]<= '9')
            (*digits)++;
    }

    return 0;
}