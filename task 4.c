#include <stdio.h>
#include <string.h>

int main() {
    char user[10], pass[10], u[10], p[10];
    int i, d, up, low;

    while (1) {
        printf("Enter username (5 letters): ");
        scanf("%s", user);
        if (strlen(user) != 5) {
            printf("Invalid!\n");
            continue;
        }
        for (i = 0; i < 5; i++) {
            if (!((user[i] >= 'A' && user[i] <= 'Z') || (user[i] >= 'a' && user[i] <= 'z')))
                break;
        }
        if (i == 5) break;
        else printf("Invalid!\n");
    }

    while (1) {
        d = up = low = 0;
        printf("Enter password (6 chars, must have digit, upper, lower): ");
        scanf("%s", pass);

        if (strlen(pass) != 6) {
            printf("Invalid!\n");
            continue;
        }
        for (i = 0; i < 6; i++) {
            if (pass[i] >= '0' && pass[i] <= '9') d = 1;
            if (pass[i] >= 'A' && pass[i] <= 'Z') up = 1;
            if (pass[i] >= 'a' && pass[i] <= 'z') low = 1;
        }
        if (d && up && low) break;
        else printf("Invalid!\n");
    }

    printf("Account Created Successfully!\n");
    
    while (1) {
        printf("Login username: ");
        scanf("%s", u);
        printf("Login password: ");
        scanf("%s", p);

        if (strcmp(user, u) == 0 && strcmp(pass, p) == 0) {
            printf("Welcome %s, you are now logged in.\n", u);
            break;
        } else {
            printf("Wrong! Try again.\n");
            continue;
        }
    }

    return 0;
}

