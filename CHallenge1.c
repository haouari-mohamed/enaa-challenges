#include <stdio.h>

int main() {
    int A, B, C;
    int Max;

    printf("Entrer A : ");
    scanf("%d", &A);
    printf("Entrer B : ");
    scanf("%d", &B);
    printf("Entrer C : ");
    scanf("%d", &C);

    Max = A;

    if (B > Max) {
        Max = B;
    }

    if (C > Max) {
        Max = C;
    }

    printf("Le maximum est : %d\n", Max);

    return 0;
}