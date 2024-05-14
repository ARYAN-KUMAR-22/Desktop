// WAP TO INPUT AN INTEGER ARRAY & PRINT THE ADDRESS OF EACH CELL OF ARRAY.

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];

    int *p;
    p = &arr[n];
        
    printf("ENTER ELEMENT : ");
    for( int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d\n", p+i);
    }

    return 0;
}        