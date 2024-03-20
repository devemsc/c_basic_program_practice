#include <stdio.h>
#include <string.h>

void str_rev(char *str, int start, int end) {
    if (start >= end) {
        return;
    }
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    str_rev(str, start + 1, end - 1); // Corrected recursive call
}

int main() {
    char name[] = "charan";
    int start = 0, end = strlen(name) - 1;
    str_rev(name, start, end);
    printf("Reversed String: %s\n", name); // Print the reversed string
    return 0;
}
