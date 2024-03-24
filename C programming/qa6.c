// WRITE A C PROGRAM TO FIND THE LARGEST ELEMENT IN EACH ROW IN A 2D ARRAY.

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

    for(int i=0; i<r; i++)
    {
        int max = 0;
        for(int j=0; j<c; j++)
        {
            if(max<arr[i][j])
            {
                max = arr[i][j];
            }
        }
        printf("MAXIMUM OF %dTH ROW IS %d \n", i, max);
    }

    return 0;
}