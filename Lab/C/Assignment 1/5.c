#include <stdio.h>
// int m, n;
// int matrix[10][10];
// Function to get matrix input from user
void getMatrixInput() {
    // int matrix[10][10], m, n;
    int m, n;
    int matrix[10][10]; 
    printf("Enter number of rows (M)1: ");
    scanf("%d", &m);
    printf("Enter number of columns (N)1: ");
    scanf("%d", &n);
    printf("Enter elements of the matrix 1:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void displayMatrix() {
    // int matrix[10][10], m, n;
    int m, n;
    int matrix[10][10];
    printf("Matrix:\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main () {
    getMatrixInput();
    displayMatrix();

    return 0;
}





















// #include <stdio.h>

// // Function to get matrix input from user
// void getMatrixInput1(int matrix[10][10], int m, int n) {
//     printf("Enter elements of the matrix 1:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// void getMatrixInput2(int matrix[10][10], int m, int n) {
//     printf("Enter elements of the matrix 2:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("Element [%d][%d]: ", i + 1, j + 1);
//             scanf("%d", &matrix[i][j]);
//         }
//     }
// }

// // Function to display the matrix
// void displayMatrix(int matrix[10][10], int m, int n) {
//     printf("Matrix:\n");
//     for (int i = 0; i < m; i++) {
//         for (int j = 0; j < n; j++) {
//             printf("%d ", matrix[i][j]);
//         }
//         printf("\n");
//     }
// }

// int main() {
//     int m, n;

   

//     // Check if matrix dimensions are valid
//     // if (m <= 0 || n <= 0) {
//     //     printf("Invalid matrix dimensions!\n");
//     //     return 1;
//     // }

//     // Declare matrix with max size 10x10
//     int matrix[10][10];

//     // Get matrix dimensions from user
//     printf("Enter number of rows (M)1: ");
//     scanf("%d", &m);
//     printf("Enter number of columns (N)1: ");
//     scanf("%d", &n);

//     // Get matrix input from user
//     getMatrixInput1(matrix, m, n);

//     // Get matrix dimensions from user
//     printf("Enter number of rows (M)2: ");
//     scanf("%d", &m);
//     printf("Enter number of columns (N)2: ");
//     scanf("%d", &n);
//     getMatrixInput2(matrix, m, n);

//     // Display the matrix
//     displayMatrix(matrix, m, n);

//     return 0;
// }