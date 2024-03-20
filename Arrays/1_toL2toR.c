#include <stdio.h>

void pushZerosOnes(int arr[], int size) {
    int left = 0;
    int right = size - 1;

    while (left < right) {
        while (arr[left] == 1 && left < right) {
            left++;
        }
        while (arr[right] == 0 && left < right) {
            right--;
        }
        if (left < right) {
            arr[left++] = 1;
            arr[right--] = 0;
        }
    }
}

int main() {
    int arr[] = {1, 0, 1, 0, 1, 1, 0, 0};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Original Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    pushZerosOnes(arr, size);

    printf("Array after pushing zeros to the right and ones to the left: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
