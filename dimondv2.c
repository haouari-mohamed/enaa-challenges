#include <stdio.h>

void printSpaces(int spaces) {
    for (int i = 0; i < spaces; i++) {
        printf(" ");
    }
}

void printStars(int stars) {
    for (int i = 0; i < stars; i++) {
        printf("*");
    }
}

void printDiamond(int n) {
    // Print upper half of the diamond
    for (int i = 1; i <= n; i += 2) {
        printSpaces((n - i) / 2);
        printStars(i);
        printf("\n");
    }

    // Print lower half of the diamond
    for (int i = n - 2; i > 0; i -= 2) {
        printSpaces((n - i) / 2);
        printStars(i);
        printf("\n");
    }
}

int main() {
    int n;

    // Get user input for the size of the diamond
    printf("Enter the size of the diamond: ");
    scanf("%d", &n);

    // Check if the input is even and increment it
    if (n % 2 == 0) {
        n++;
        printf("Even number incremented to create a symmetrical diamond.\n");
    }

    // Print the diamond pattern
    printDiamond(n);

    return 0;
}