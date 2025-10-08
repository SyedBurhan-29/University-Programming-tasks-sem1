#include <stdio.h>

int main() {
    int num, pos = 1, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num > 0) {
        rem = num % 10;
        if (pos % 2 != 0) {
            sum = sum + rem;
        }
        num = num / 10;
        pos++;
    }

    printf("Sum of digits in odd positions = %d\n", sum);

    return 0;
}

