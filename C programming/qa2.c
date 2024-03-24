// WRITE A C PROGRAM TO FIND THE SUM OF DIAGONAL ELEMENTS IN A 2D ARRAY.

#include <stdio.h>

int main()
{
    int r, c;
    printf("ENTER ROW AND COLOUMN SIZE : ");
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

    int sum = 0;

    for(int i=0; i<r; i++)
    {
        for( int j=0; j<c; j++)
        {
            if(i==j){
                sum = sum + arr[i][j];
                printf("%d\n", sum);
            }
        }
    }

    printf("THE SUM OF THE DIAGONALS OF MATRIX IS : %d", sum);

    return 0;
}