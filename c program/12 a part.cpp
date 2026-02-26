#include <stdio.h>

int is_identity_matrix(int matrix[][3], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                // Diagonal elements should be 1
                if (matrix[i][j] != 1) {
                    return 0; // Not an identity matrix
                }
            } else {
                // Off-diagonal elements should be 0
                if (matrix[i][j] != 0) {
                    return 0; // Not an identity matrix
                }
            }
        }
    }
    return 1; // It's an identity matrix
}

int main() {

printf("name:jasnoor kaur\n");
printf("2410997165\n");
{
	
    int matrix[3][3] = {
        {1, 0, 0},
        {0, 1, 0},
        {0, 0, 1}
    };
    
    int n = 3; // Size of the matrix (3x3 in this case)

    if (is_identity_matrix(matrix, n)) {
        printf("The matrix is an Identity matrix.\n");
    } else {
        printf("The matrix is not an Identity matrix.\n");
    }

    return 0;
}

}
