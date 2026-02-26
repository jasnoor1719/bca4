#include <stdio.h>

void convert_even_odd(int matrix[][3], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = (matrix[i][j] % 2 == 0) ? matrix[i][j] + 1 : matrix[i][j] - 1;
        }
    }
}

int main() {
	printf("jasnoor kaur\n");
	printf("2410997165\n");
    int matrix[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    convert_even_odd(matrix, 3, 3);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}

