#include <stdio.h>

int main() {
    double note1, note2, note3, moyenne;

    // Demande des notes
    printf("Entrez la premiere note : ");
    scanf("%lf", &note1);

    printf("Entrez la deuxieme note : ");
    scanf("%lf", &note2);

    printf("Entrez la troisieme note : ");
    scanf("%lf", &note3);

    // La moyenne des notes
    moyenne = (note1 + note2 + note3) / 3;

    // Affichage de la moyenne
    printf("La moyenne est : %.2lf\n", moyenne);

    switch ((int)moyenne) {
        case 10:
        case 11:
            printf("Passable\n");
            break;
        case 12:
        case 13:
            printf("Assez bien\n");
            break;
        case 14:
        case 15:
            printf("Bien\n");
            break;
        default:
            printf("Aucune qualification spécifique\n");
            break;
    }

    return 0;
}