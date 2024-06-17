// WRITE A C PROGRAM TO PASS AN ARRAY OF N INTEGER ELEMENTS INTO A FUNCTION AND FUNCTION WILL RETURN COUNT OF EVEN AND ODD ELEMENTS.

#include <stdio.h>
#include <string.h>

int noeo( int arr[], int size, int *e, int *o);

int even = 0, odd = 0;

int main()
{
    int s; 
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &s);

    int arr[s];
    printf("ENTER THE ELEMENTS OF ARRAY : ");
    for( int i = 0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    noeo ( arr, s, &even, &odd);

    printf("NUMBER OF EVEN ELEMENTS : %d \nNUMBER OF ODD ELEMENTS : %d\n");

    return 0;
}