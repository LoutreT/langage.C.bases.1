#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    const int MIN = 1;  // Ici j'ai choisi de séparer mes 2 constantes en 2 lignes séparées
    const int MAX = 100;

    int nombreADeviner = 0;  // Ici j'ai choisi de séparer mes 'int' en plusieurs lignes séparées
    int nombre = 0;
    int nombreDEssai = 0;
    int essai = 0;

    srand(time(NULL));
    nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;

    printf(nombreADeviner);
    printf("Hello ! Voici le jeu nomme 'Plus Ou Moins'\n\n La regle du jeu est de mettre un \n nombre jusqu'a ce que vous trouviez le bon nombre cache\n");

    do
    {
        nombreDEssai++;
        printf("\n\n Voici, choisissez un nombre entre 0 et 100 \n\n");
        scanf("%d", &nombre);


        if (nombre == nombreADeviner)
            printf("Voici, c'est le bon nombre !\n ");

        else if(nombre > nombreADeviner)
            printf("Non, il faut chercher un nombre plus petit \n");

        else // (nombre < nombreADeviner)
            printf("Ce n est pas ca il faut chercher un nombre plus grand \n");


        // nombreDEssai += essai ;
        // printf("Vous avez joue en %d ", &nombreDEssai);


    }while(nombre != nombreADeviner);

    // printf("Vous avez joue en %d ", nombreDEssai);



    return 0;
}

