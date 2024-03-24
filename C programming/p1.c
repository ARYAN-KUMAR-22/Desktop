/*
 WRITE A PROGRAM TO 
    > THE SUM OF EACH ROW IN 2D ARRAY.
    > SUM OF EACH COLOUMN IN 2D ARRAY.
    > MAXIMUM OF EACH ROW IN 2D ARRAY.
    > MINIMUM OF EACH COLOUMN IN 2D ARRAY.
    > THE DIAGONAL ELEMENTS OF SQUARE MATRIX.
 */  

#include <stdio.h>

int main()
{
    int r, c;
    printf("ENTER SIZE OF ARRAY'S ROW AND COLOUMN : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];

    printf("Enter the Elements : ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", arr[r][c]);
        }
    }

    return 0;   
}