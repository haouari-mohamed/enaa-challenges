#include <stdio.h>
/*
int main() {
    int a;

    printf("Entrez l'age de l'enfant : ");
    scanf("%d", &a);
        //"poussin de 6 a 7 ans" 
    if (a >= 6 && a <= 7) {
        printf("L'enfant est dans la categorie poussin.\n");
        //"pupille de 8 a 9 ans " 
    } else if (a >= 8 && a <= 9) {
        printf("L'enfant est dans la categorie pupille.\n");
        //"pupille de 10 a 11 ans " 
    } else if (a >= 10 && a <= 11) {
        printf("L'enfant est dans la categorie minime.\n");
          //"pupille de 10 a 11 ans " 
    } else if (a >= 12) {
        printf("L'enfant est dans la categorie cadet.\n");
        // eurour
    } else {
        printf("L'age n'est pas dans une categorie definie.\n");
    }

    return 0;
}*/
#include <stdio.h>

int main() {
    int age;

    printf("Entrez l'âge de l'enfant : ");
    scanf("%d", &age);

    switch (age) {
        case 6:
        case 7:
            printf("L'enfant est dans la catégorie poussin.\n");
            break;
        case 8:
        case 9:
            printf("L'enfant est dans la catégorie pupille.\n");
            break;
        case 10:
        case 11:
            printf("L'enfant est dans la catégorie minime.\n");
            break;
        default:
            if (age >= 12) {
                printf("L'enfant est dans la catégorie cadet.\n");
            } else {
                printf("L'âge n'est pas dans une catégorie définie.\n");
            }
            break;
    }

    return 0;
}