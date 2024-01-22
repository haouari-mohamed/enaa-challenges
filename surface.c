#include <stdio.h>

int main() {
    
    double longueur, largeur, aire;

    // Demande à l'utilisateur d'entrer la longueur du rectangle
    printf("Entrez la longueur du rectangle : ");
    scanf("%lf", &longueur);

    // Demande à l'utilisateur d'entrer la largeur du rectangle
    printf("Entrez la largeur du rectangle : ");
    scanf("%lf", &largeur);

    // Calcule l'aire du rectangle en multipliant la longueur par la largeur
    aire = longueur * largeur;

    // Affiche le résultat de l'aire du rectangle
    
    printf("L'aire du rectangle est : %.2lf\n", aire);

    return 0;
}