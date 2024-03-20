#include <stdio.h>

void setbitMap(char bitmap[], int pos) {
    int byte_pos = pos / 8;
    int bit_offset = pos % 8;
    bitmap[byte_pos] |= (1 << bit_offset);
}

int main() {
    char bitmap[4] = {0};
    int position = 10;
    setbitMap(bitmap, position);

    // Print the bitmap array in hexadecimal format
    for (int i = 0; i < 4; i++) {
        printf("%02x ", (unsigned char)bitmap[i]);
    }
    printf("\n");

    return 0;
}
