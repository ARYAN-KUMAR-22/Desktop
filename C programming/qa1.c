// WRITE A C PROGRAM TO REVERSE ELEMENTS IN A 1D ARRAY.

#include <stdio.h>

int main()
{
    int s;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &s);

    int arr[s];

    printf("ENTER THE ELEMENTS : ");
    for(int i=0; i<s; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp,swap=s;
    for(int i=0; i<s/2; i++)
    {
        temp = arr[i];
        arr[i] = arr[swap-1];
        arr[swap-1] = temp;
        swap--;
    }

    for(int i=0; i<s; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}