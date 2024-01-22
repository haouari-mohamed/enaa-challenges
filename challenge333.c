#include <stdio.h>
#include <math.h>

int main() 
{
    double b, e, r;
 
    printf("Entrez la base : ");
    scanf("%lf", &b);

    printf("Entrez l'exposant : ");
    scanf("%lf", &e);

    r = pow(b, e);

    printf("La puissance de  %.2lf ^ %.2lf = %.2lf\n", b, e, r);

    return 0;
}