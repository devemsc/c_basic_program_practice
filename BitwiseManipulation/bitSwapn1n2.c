#include <stdio.h>

void bitSwap(int num, int pos1, int pos2) {
    // Extract bits at positions pos1 and pos2
    int bit1 = (num >> pos1) & 1;
    int bit2 = (num >> pos2) & 1;

    // Toggle bits at positions pos1 and pos2 if they are different
    if (bit1 != bit2) {
        num ^= (1 << pos1) | (1 << pos2);
    }

    printf("Swapped Number: %d\n", num);
}

int main() {
    int a = 5; // Binary: 0101

    bitSwap(a, 1, 1); // Swap bits at positions 0 and 1

    return 0;
}
