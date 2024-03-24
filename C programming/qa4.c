// WRITE A C PROGRAM TO CHECK IF A GIVEN 2D ARRAY IS A SYMMETRIC MATRIX.

#include <stdio.h>

int main()
{
    int r, c;
    printf("ENTER ROW AND COLOUMN SIZE : ");
    scanf("%d %d", &r, &c);

    int arr[r][c];
    int check = 0;

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
        for(int j=0; j<c; j++)
        {
            if(arr[i][j]==arr[j][i])
            {
                continue;
            }
            else
            {
                check++;
            }
        }
    }

    if(check == 0)
    {
        printf("MATRIX IS SYMMETRIC.");
    }
    else
    {
        printf("MATRIX IS NOT SYMMETRIC.");
    }

    return 0;
}