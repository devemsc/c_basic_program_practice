#include <stdio.h>
#include <stdlib.h>

int **arr; // Declare arr as a pointer to pointer to int

void dy2D(int rows, int cols) {
    arr = (int **)malloc(rows * sizeof(int *)); // Allocate memory for rows

    if (arr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }

    for (int i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int)); // Allocate memory for each row

        if (arr[i] == NULL) {
            fprintf(stderr, "Memory allocation failed\n");
            exit(1);
        }
    }
}

void Take2D(int **arr, int rows, int cols) {
    printf("Enter elements for the 2D array:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

void print2D(int **arr, int rows, int cols) {
    printf("2D Array elements:\n");

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int rows = 3;
    int cols = 3;

    dy2D(rows, cols);
    Take2D(arr, rows, cols);
    print2D(arr, rows, cols);

    // Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
