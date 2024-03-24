// WRITE A C PROGRAM TO FIND THE LARGEST AND SMALLEST ELEMENT IN A 2D ARRAY USING FUNCTIONS.

#include <stdio.h>

int main()
{
    int r, c; 
    printf("ENTER THE ROW AND COLOUMN SIZE : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("ENTER THE ELEMENTS : ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int max = 0;
    int min = arr[0][0];
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
            }
        
            if(min>arr[i][j])
            {
                min = arr[i][j];
            }
        }
        
    }
        printf("MAXIMUM IS %d \n", max);
        printf("MINIMUM IS %d", min);

    return 0;
}