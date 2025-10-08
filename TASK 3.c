#include <stdio.h>

int main() {
    int n, i, s, j;
    printf("Enter an odd number: ");
    scanf("%d", &n);
    if (n % 2 == 0 || n <= 0) return 0;
    int mid = n / 2 + 1;

    printf("\n--- For loop ---\n");
    for (i = 1; i <= n; i++) {
        int r = i <= mid ? i : n - i + 1;
        for (s = 1; s <= mid - r; s++) printf(" ");
        for (j = 1; j <= 2 * r - 1; j++) printf("*");
        printf("\n");
    }

    printf("\n--- While loop ---\n");
    i = 1;
    while (i <= n) {
        int r = i <= mid ? i : n - i + 1;
        int s = 1; while (s++ <= mid - r) printf(" ");
        int j = 1; while (j++ <= 2 * r - 1) printf("*");
        printf("\n");
        i++;
    }
    return 0;
}

