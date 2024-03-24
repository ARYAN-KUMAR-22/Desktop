// WRITE A C PROGRAM TO FIND THE SUM OF EACH ROW AND EACH COLOUMN IN A 2D ARRAY.

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
        int sum = 0;
        for(int j=0; j<c; j++)
        {
            sum = sum + arr[i][j];
        }
        printf("SUM OF %dTH ROW IS %d \n", i, sum);
    }

    return 0;
}