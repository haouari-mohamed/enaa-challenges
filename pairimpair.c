#include <stdio.h>

int main() {
    int n;

    printf("Entrez un nombre entier : ");
    scanf("%d", &n);

    if (n % 2 == 0) {

        printf("%d  Est un nombre pair.\n", n);
    } else {
        printf("%d est un nombre impair.\n", n);
    }

    return 0;
}