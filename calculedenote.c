#include <stdio.h>
int a,b;
int Addition(a, b) {
    return a + b;
}

int Soustraction(a, b) {
    return a - b;
}

int Multiplication(a,  b) {
    return a * b;
}

int main() {
    int nombre1, nombre2;
    int choix;

    printf("Entrez le premier nombre : ");
    scanf("%d", &nombre1);

    printf("Entrez le deuxime nombre : ");
    scanf("%d", &nombre2);

    printf("Choisissez l'operation :\n");
    printf("1. Addition\n");
    printf("2. Soustraction\n");
    printf("3. Multiplication\n");
     printf("4. Toutes les operation\n");

    scanf("%d", &choix);

    switch (choix) {
        case 1:
            printf("Le resultat de l'addition est : %d\n", Addition(nombre1, nombre2));
            break;
        case 2:
            printf("Le resultat de la soustraction est : %d\n", Soustraction(nombre1, nombre2));
            break;
        case 3:
            printf("Le resultat de la multiplication est : %d\n", Multiplication(nombre1, nombre2));
            break;
            case 4:
            {
                        printf("Le resultat de l'addition est : %d\n", Addition(nombre1, nombre2));
                        printf("Le resultat de la soustraction est : %d\n", Soustraction(nombre1, nombre2));
                        printf("Le resultat de la multiplication est : %d\n", Multiplication(nombre1, nombre2));
            }
            break;

        default:
            printf("Choix invalide.\n");
            break;
    }

    return 0;
}