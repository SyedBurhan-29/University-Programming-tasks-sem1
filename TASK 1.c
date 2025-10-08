#include <stdio.h>

int main() {
    int i, n, fact = 1;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Negative number entered! Program will exit.\n");
        return 0;
    }

    for (i = n; i >= 1; i--) {
        fact *= i; 
    }

    printf("Factorial of %d is = %d\n", n, fact);
    return 0;
}

