// WAP TO SORT AN ARRAY USING POINTER.

#include <stdio.h>

int main()
{
    int n;
    printf("ENTER THE SIZE OF ARRAY : ");
    scanf("%d", &n);

    int arr[n];

    printf("ENTER ELEMENTS : ");
    for(int i = 0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    int temp;
    int *p = &arr;

    for(int i = 0; i<n; i++)
    {
        for(int j = 0; j<n; j++)
        {
            if(*(p+i) < *(p+j))
            {
                temp = *(p+i);
                *(p+i) = *(p+j);
                *(p+j) = temp;
            }
        }
    }

    for(int i = 0; i<n; i++)
    {
        printf("%d", arr[i]);
    }

    return 0;
}