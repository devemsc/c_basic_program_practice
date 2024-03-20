#include<stdio.h>

int num;
int replace(int num) {
    int digit, newNum = 0;
    while(num > 0) {
        digit = num % 10;
        if(digit == 0) {
            digit = 1;
        }
        newNum = newNum * 10 + digit;
        num /= 10;
    }
    return newNum;
}

int main() {
    int a = 10678;
    num = replace(a);
    printf("%d\n", replace(num));
    return 0;
}
