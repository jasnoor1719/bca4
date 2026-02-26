#include <stdio.h>

int can_add(int r1, int c1, int r2, int c2) {
    return r1 == r2 && c1 == c2;
}

int can_multiply(int c1, int r2) {
    return c1 == r2;
}

void print_matrix(int m[][3], int r, int c) {
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", m[i][j]);
        }
        printf("\n");
    }
}

int main()
 {
 	printf("jasnoor kaur\n");
 	printf("2410997165\n");
    int A[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int B[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int C[3][3], r1 = 3, c1 = 3, r2 = 3, c2 = 3;

    // Add matrices
    if (can_add(r1, c1, r2, c2)) {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c1; j++)
                C[i][j] = A[i][j] + B[i][j];
        printf("Sum:\n");
        print_matrix(C, r1, c1);
    } else {
        printf("Matrices can't be added.\n");
    }

    // Multiply matrices
    if (can_multiply(c1, r2)) {
        for (int i = 0; i < r1; i++)
            for (int j = 0; j < c2; j++) {
                C[i][j] = 0;
                for (int k = 0; k < c1; k++) {
                    C[i][j] += A[i][k] * B[k][j];
                }
            }
        printf("Product:\n");
        print_matrix(C, r1, c2);
    } else {
        printf("Matrices can't be multiplied.\n");
    }

    return 0;
}

