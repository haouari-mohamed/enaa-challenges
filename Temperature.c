#include <stdio.h>

int main() {
    double celsius, fahrenheit;

    // Demande à l'utilisateur d'entrer la température en degrés Celsius
    printf("Entrez la température en degrés Celsius : ");
    scanf("%lf", &celsius);

    // Convertit la température de Celsius à Fahrenheit en utilisant la formule appropriée
    fahrenheit = (celsius * 9 / 5) + 32;

    // Affiche le résultat de la conversion de Celsius en Fahrenheit
    printf("%.2lf Celsius = %.2lf Fahrenheit\n", celsius, fahrenheit);

    return 0;
}