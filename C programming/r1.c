// WRITE A PROGRAM TO PRINT THE NUMBER SMALLER THAN THE INPUT NUMBER IN AN ARRAY.

#include <stdio.h>

int main()
{
    int s;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &s);

    int arr[s];

    printf("ENTER THE ELEMENTS : ");
    for ( int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int c=0, n;
    printf("ENTER THE NUMBER : ");
    scanf("%d", &n);
    int result[25];

    for( int i=0; i<s; i++)
    {
        if(arr[i]<n)
        {
            result[c] = arr[i];
            c++;
        }
    }

    for(int i=0; i<c; i++)
    {
        printf("%d ", result[i]);
    }
}