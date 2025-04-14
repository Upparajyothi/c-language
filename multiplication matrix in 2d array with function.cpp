#include <stdio.h>

#define R1 3  // Rows of first matrix
#define C1 2  // Columns of first matrix
#define R2 2  // Rows of second matrix
#define C2 3  // Columns of second matrix

// Function to multiply matrices
void Multiply(int a[R1][C1], int b[R2][C2], int result[R1][C2]) {
    int i, j, k;
    
    // Initialize result matrix to 0
    for(i = 0; i < R1; i++) {
        for(j = 0; j < C2; j++) {
            result[i][j] = 0;
            for(k = 0; k < C1; k++) {
                result[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    // Print the result matrix
    printf("Product of the matrices:\n");
    for(i = 0; i < R1; i++) {
        for(j = 0; j < C2; j++) {
            printf("%d\t", result[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int m1[R1][C1], m2[R2][C2], result[R1][C2];
    int i, j;

    // Input first matrix
    printf("Enter elements of Matrix 1 (%dx%d):\n", R1, C1);
    for(i = 0; i < R1; i++)
        for(j = 0; j < C1; j++)
            scanf("%d", &m1[i][j]);

    // Input second matrix
    printf("Enter elements of Matrix 2 (%dx%d):\n", R2, C2);
    for(i = 0; i < R2; i++)
        for(j = 0; j < C2; j++)
            scanf("%d", &m2[i][j]);

    // Call the multiplication function
    Multiply(m1, m2, result);

    return 0;
}


