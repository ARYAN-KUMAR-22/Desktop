// WRITE A C PROGRAM TO PERFORM MATRIX MULTIPLICATION USING FUNCTIONS.

#include <stdio.h>

#define MAX_SIZE 10 // Maximum size for matrices

// Function to perform matrix multiplication
void multiplyMatrices(int mat1[][MAX_SIZE], int mat2[][MAX_SIZE], int result[][MAX_SIZE], int row1, int col1, int row2, int col2) {
    // Check if multiplication is possible
    if (col1 != row2) {
        printf("Matrix multiplication is not possible.\n");
        return;
    }

    // Perform matrix multiplication
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col2; ++j) {
            result[i][j] = 0; // Initialize result matrix element to 0
            for (int k = 0; k < col1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

// Function to display a matrix
void displayMatrix(int matrix[][MAX_SIZE], int row, int col) {
    for (int i = 0; i < row; ++i) {
        for (int j = 0; j < col; ++j) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[MAX_SIZE][MAX_SIZE], mat2[MAX_SIZE][MAX_SIZE], result[MAX_SIZE][MAX_SIZE];
    int row1, col1, row2, col2;

    // Input matrix 1
    printf("Enter the number of rows and columns for matrix 1: ");
    scanf("%d %d", &row1, &col1);
    printf("Enter elements of matrix 1:\n");
    for (int i = 0; i < row1; ++i) {
        for (int j = 0; j < col1; ++j) {
            scanf("%d", &mat1[i][j]);
        }
    }

    // Input matrix 2
    printf("Enter the number of rows and columns for matrix 2: ");
    scanf("%d %d", &row2, &col2);
    printf("Enter elements of matrix 2:\n");
    for (int i = 0; i < row2; ++i) {
        for (int j = 0; j < col2; ++j) {
            scanf("%d", &mat2[i][j]);
        }
    }

    // Multiply matrices
    multiplyMatrices(mat1, mat2, result, row1, col1, row2, col2);

    // Display result
    printf("Result of matrix multiplication:\n");
    displayMatrix(result, row1, col2);

    return 0;
}
