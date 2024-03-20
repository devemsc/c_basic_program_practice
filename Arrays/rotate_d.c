#include <stdio.h>

void reverse(int arr[], int start, int end) {
    while (start < end) {
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

void rotateArray(int arr[], int size, int rotateBy) {
    rotateBy %= size; // Handle rotation larger than array size
    if (rotateBy < 0) {
        rotateBy += size; // Handle negative rotation
    }

    reverse(arr, 0, size - 1); // Reverse the entire array
        for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, 0, rotateBy - 1); // Reverse the first part
        for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    reverse(arr, rotateBy, size - 1); // Reverse the second part
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rotateBy = 2;

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    rotateArray(arr, size, rotateBy);

    printf("Array after rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
\