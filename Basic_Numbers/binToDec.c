#include <stdio.h>

unsigned int binToDec(unsigned int num) {
    unsigned int rem, dec = 0, base = 1;
    while (num > 0) {
        rem = num % 10;
        dec += rem * base;
        base *= 2;
        num /= 10;
    }
    return dec;
}

int main() {
    unsigned int a = 110001; // Binary representation of 10001
    unsigned int dec = binToDec(a);
    printf("Decimal Equivalent: %u\n", dec);
    return 0;
}
