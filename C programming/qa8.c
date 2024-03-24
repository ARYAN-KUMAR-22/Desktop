// WRITE A C PROGRAM TO FIND THE TRANSPOSE OF A MATRIX USING FUNCTIONS.
 
#include <stdio.h>

int main()
{
    int r, c;
    printf("ENTER ROW AND COLOUMN SIZE : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("ENTER THE ELEMENTS : ");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        
    }

    int narr[c][r];
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            narr[i][j] = arr[j][i];
        }
    }
    
    for(int i=0; i<c; i++)
    {
        for(int j=0; j<r; j++)
        {
            printf("%d ", narr[i][j]);
        }
        printf("\n");
    }

    
    return 0;
    
}