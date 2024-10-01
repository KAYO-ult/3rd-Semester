#include <stdio.h>

// Function to add two matrices
void addMatrices(int matrix1[10][10], int matrix2[10][10], int result[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
}

// Function to print a matrix
void printMatrix(int matrix[10][10], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m, n;

    // Get matrix dimensions from user
    printf("Enter number of rows: ");
    scanf("%d", &m);
    printf("Enter number of columns: ");
    scanf("%d", &n);

    // Declare matrices
    int matrix1[10][10], matrix2[10][10], result[10][10];

    // Get matrix elements from user
    printf("Enter elements of Matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter elements of Matrix 2:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix2[i][j]);
        }
    }

    // Add matrices
    addMatrices(matrix1, matrix2, result, m, n);

    // Print result
    printf("Matrix 1:\n");
    printMatrix(matrix1, m, n);
    printf("Matrix 2:\n");
    printMatrix(matrix2, m, n);
    printf("Result:\n");
    printMatrix(result, m, n);

    return 0;
}

//Output
// Enter number of rows: 2
// Enter number of columns: 2
// Enter elements of Matrix 1:
// Element [1][1]: 1
// Element [1][2]: 2
// Element [2][1]: 3
// Element [2][2]: 4
// Enter elements of Matrix 2:
// Element [1][1]: 1
// Element [1][2]: 2
// Element [2][1]: 3
// Element [2][2]: 4
// Matrix 1:
// 1 2
// 3 4
// Matrix 2:
// 1 2
// 3 4
// Result:
// 2 4
// 6 8