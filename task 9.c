#include <stdio.h>

int main() {
    int i, num, temp, digits = 0, div = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    do {
        digits++;
        temp = temp / 10;
    } while (temp > 0);

    for (i = 1; i < digits; i++)
        div = div * 10;

    for (i = 1; i <= digits; i++) {
        printf("Digit %d: %d\n", i, num / div);
        num = num % div;
        div = div / 10;
    }

    return 0;
}

