#include<stdio.h>
#include<string.h>

char* convert(char *str, int len) {
    for (int i = 0; i < len; i++) {
        if (i == 0) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            continue;
        }
        if (str[i] == ' ') {
            ++i;
            if (str[i] >= 'a' && str[i] <= 'z') {
                str[i] = str[i] - 32;
            }
            continue;
        } else {
            // all other uppercase characters should be in lowercase
            if (str[i] >= 'A' && str[i] <= 'Z') {
                str[i] = str[i] + 32; // subtract 32 to make it small/lowercase
            }
        }
    }
    return str;
}

int main() {
    char name[] = "i am saicharan";
    int len = strlen(name);
    convert(name, len);
    printf("%s", name);
    return 0;
}
