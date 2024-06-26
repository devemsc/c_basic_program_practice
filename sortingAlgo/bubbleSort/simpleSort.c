#include <stdio.h>

void Swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
bool swapped;

void Bubsort(int a[], int n) {
    for (int i = 0; i < n - 1; i++) {
        swapped = false;
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                Swap(&a[j], &a[j+1]);
                swapped=true;
            }
        }
    if(swapped==false)
    {
        break;
    }
    }
}

void Print(int a[], int len) {
    for (int i = 0; i < len; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int a[] = {1, 4, 9, 6, 2};
    int size = sizeof(a) / sizeof(a[0]);
    Bubsort(a, size);
    Print(a, size);
    return 0;
}
