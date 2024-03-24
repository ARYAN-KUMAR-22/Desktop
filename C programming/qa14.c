// write a c program to find saddle point of a matrix

#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int matrix[MAX_SIZE][MAX_SIZE];
    int rows, cols;

    printf("Enter the number of rows and columns of the matrix: ");
    scanf("%d %d", &rows, &cols);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Finding saddle point
    int saddlePointRow = -1, saddlePointCol = -1;
    for (int i = 0; i < rows; i++) {
        int minInRow = matrix[i][0];
        int colIndex = 0;
        for (int j = 1; j < cols; j++) {
            if (matrix[i][j] < minInRow) {
                minInRow = matrix[i][j];
                colIndex = j;
            }
        }
        int maxInCol = matrix[0][colIndex];
        int rowIndex = 0;
        for (int k = 1; k < rows; k++) {
            if (matrix[k][colIndex] > maxInCol) {
                maxInCol = matrix[k][colIndex];
                rowIndex = k;
            }
        }
        if (minInRow == maxInCol) {
            saddlePointRow = rowIndex;
            saddlePointCol = colIndex;
            break;
        }
    }

    // Displaying saddle point
    if (saddlePointRow != -1 && saddlePointCol != -1) {
        printf("Saddle point found at (%d, %d): %d\n", saddlePointRow + 1, saddlePointCol + 1, matrix[saddlePointRow][saddlePointCol]);
    } else {
        printf("No saddle point found.\n");
    }

    return 0;
}
