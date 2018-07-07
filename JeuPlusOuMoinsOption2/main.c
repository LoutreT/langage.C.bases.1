#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    const int MIN = 1;  // Ici j ai choisi de séparer mes 2 constantes en 2 lignes séparées
    const int MAX = 100;

    int nombreADeviner = 0;  // Ici j'ai choisi de séparer mes 'int' en plusieurs lignes séparées
    int nombre = 0;
    int nombreDEssai = 0;
    int continuerPartie = 1;
    srand(time(NULL));

    printf("Hello ! Voici le jeu du nom 'Plus Ou Moins'\n\n La regle du jeu est de mettre un \n nombre jusqu'a ce que vous trouviez le bon nombre cache\n");


    do
    {
        nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
        // printf(nombreADeviner);  // ---> Pour un test, à cause de cette ligne, mon jeu ne fonctionnait plus.
        printf("\n\n Voici, choisissez un nombre entre 0 et 100 \n\n");

        do
        {
            nombreDEssai++;

            scanf("%d", &nombre);

            if (nombre == nombreADeviner)
                printf("Voici, c'est le bon nombre !\n\n ");

            else if(nombre > nombreADeviner)
                printf("Non, il faut chercher un nombre plus petit \n");

            else if (nombre < nombreADeviner)  // ---> J ai choisi else if au lieu de else pour garder la condition exclusive propre à celle-ci parmis toutes les éventualités.
                printf("Ce n est pas ca il faut chercher un nombre plus grand \n");


            // nombreDEssai += essai ;
            // printf("Vous avez joue en %d ", &nombreDEssai);


        }while(nombre != nombreADeviner);

    printf("Voilà, vous avez joue en %d coups \n\n ", nombreDEssai);

    printf("Recommencer la partie ? \n ");
    printf("0 = Non merci \n ");
    printf("1 = Ouiii \n ");
    scanf("%d", &continuerPartie);

    }while(continuerPartie == 1);

    return 0;
}
