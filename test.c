#include <stdio.h>

void bonjour(char *nom) {
    printf("Bonjour %s!\n", nom);
void bonsoir(char *prenom)
{
    printf("Bonsoir %s.",prenom)
}
}

int main() {
    char nom[10];
    char prenom[10];

    printf("Entrez votre Nom: ");
    scanf("%s", nom);
    printf("entrer votre prenom:");
    scanf("%s",prenom);

    bonjour(nom);
    bonsoir(prenom);

    return 0;
}