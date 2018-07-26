#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    int longu = 0;
    int large = 0;
    int haut = 0;
    int volume = 0;

        printf("quelle longueur voulez vous enregistrer ?\n");
        scanf ("%d", &longu);
        printf ("Quelle largeur voulez vous enregistrer ?\n");
        scanf ("%d", &large);
        printf ("Quelle hauteur voulez-vous enregistrer ?\n");
        scanf("%d", &haut);

    volume = (longu * large * haut);
    printf(volume);
    return 0;
}
