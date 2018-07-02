#include <stdio.h>
#include <stdlib.h>

int main()
{
    /* Faire une addition et s'entraîner avec le type de valeur '%...' :
    %d  = int,
    %ld = long
    %f  = Float ou Double
    */

    int resultat = 0, nombre1 = 0, nombre2 = 0;

    printf("Quel nombre1 voulez-vous additionner ?");
    scanf("%d", &nombre1);
    printf("Quel nombre2 voulez-vous additionner ?");
    scanf("%d", &nombre2);

    resultat = nombre1 + nombre2;
    printf("%d + %d = %d\n", nombre1, nombre2, resultat);

    // réponse en 4.636 s !
    // Vincent Nassaux

    return 0;
}
