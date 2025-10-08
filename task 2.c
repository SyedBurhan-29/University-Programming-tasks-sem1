#include <stdio.h>

int main() {
    int n, num, sum = 0, rev = 0, prime = 1, i;

    printf("Enter a 5-digit number: ");
    scanf("%d", &num);

    if (num < 10000 || num > 99999) {
        printf("Invalid input! Enter a 5-digit number.\n");
        return 0;
    }

    for (n = num; n > 0; n /= 10) {
        sum += n % 10;
        rev = rev * 10 + n % 10;
    }

    if (sum % 2 == 0) {
        for (i = 2; i * i <= num; i++)
            if (num % i == 0) prime = 0;
        printf("Sum is even (%d). %d is %sPrime.\n", sum, num, prime ? "" : "NOT ");
    } else {
        printf("Sum is odd (%d). %d is %sPalindrome.\n", sum, num, (num == rev) ? "" : "NOT ");
    }

    return 0;
}

