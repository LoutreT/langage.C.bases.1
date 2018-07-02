#include <stdio.h>
#include <stdlib.h>

// Comme dans certains jeu

int main(int argc, char *argv[])
{
    int nombreDeVies = 5;

    int age = 0;

    printf("quel est votre age ?");
    scanf("%d", &age);
    printf("Vous avez %d ans\n\n", age);

    printf("Vous avez %d vies\n", nombreDeVies);
    printf("A T T E N T I O N \n");
    nombreDeVies = 4;
    printf("Ah desole, il ne vous reste plus que %d vies maintenant!\n\n", nombreDeVies);

    return 0;  // Vincent Nassaux, apprentissage
}
