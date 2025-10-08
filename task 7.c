#include <stdio.h>

int main() {
    char str[200];
    int i, j, len = 0;

    gets(str);

    while (str[len] != '\0') len++;

    for (i = len - 1; i >= 0; i--) {
        if (str[i] == ' ' || i == 0) {
            if (i == 0) j = 0;
            else j = i + 1;

            while (str[j] != ' ' && str[j] != '\0') {
                printf("%c", str[j]);
                j++;
            }
            printf(" ");
        }
    }
    return 0;
}

