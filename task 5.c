#include <stdio.h>

int main() {
    int n, i, j;
    int a = 0, b = 1, c;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf("%d ", a);
            c = a + b;
            a = b;
            b = c;
        }
        printf("\n");
    }

    return 0;
}

