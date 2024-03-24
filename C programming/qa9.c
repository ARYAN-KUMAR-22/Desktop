// WRITE A C PROGRAM TO ADD TWO MATRICES USING FUNCTIONS.

#include <stdio.h>

void add(int arr1[][100], int arr2[][100], int r, int c);

int main()
{
    int r, c;
    printf("ENTER ROW AND COLOUMN SIZE : ");
    scanf("%d %d", &r, &c);

    int arr1[r][100];
    int arr2[r][100];

    printf("ENTER THE ELEMENTS FOR FIRST MATRIX : ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr1[i][j]);
        }
    }

    printf("ENTER THE ELEMENTS FOR SECOND MATRIX : ");
    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }

    add(arr1, arr2, r, c);

}

void add(int arr1[][100], int arr2[][100], int r, int c){

    int add[r][100];

     for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            add[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for(int i=0; i<r; i++)
    {
        for(int j=0; j<c; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }
}