#include <stdio.h>

int is_square_matrix(int rows, int cols) {
    if (rows == cols) {
        return 1; // It is a square matrix
    } else {
        return 0; // It is not a square matrix
    }
}

int main() {
	printf("name=jasnoor\n");
	printf("roll no=2410997165\n");
	
    int rows = 3, cols = 3;  // Example matrix size

    if (is_square_matrix(rows, cols)) {
        printf("The matrix is a square matrix.\n");
    } else {
        printf("The matrix is not a square matrix.\n");
    }

    return 0;
}

