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
    int continuerPartie = 0;
    int soloOuDuo = 0;

    srand(time(NULL));

    printf("Hello ! Voici le jeu du nom 'Plus Ou Moins'\n\n La regle du jeu est de mettre un \n nombre jusqu a ce que vous trouviez le bon nombre cache\n");

    do
    {
        printf("\nComment desirez vous le jouer ? \n Vous souhaiteriez jouer en solo ou bien vous \n etes deux personnes qui souhaiteraient faire deviner \n entre elles le bon nombre a deviner ?");
        printf("\n 3 = En solo ");
        printf("\n 4 = A deux \n ");
        scanf("%d", &soloOuDuo);

        if(soloOuDuo == 3)
        {
            printf("\n\n Voici, choisissez un nombre entre 0 et 100 \n\n");

            nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
            // printf(nombreADeviner);  // ---> Pour un test, à cause de cette ligne, mon jeu ne fonctionnait plus.

            do
            {
                nombreDEssai++;
                scanf("%d", &nombre);

                if (nombre == nombreADeviner)
                {
                    printf("Voici, c'est le bon nombre !\n\n ");
                }
                else if(nombre > nombreADeviner)
                {
                    printf("Non, il faut chercher un nombre plus petit \n");
                }
                else if (nombre < nombreADeviner)  // ---> J ai choisi else if au lieu de else pour garder la condition exclusive propre à celle-ci parmis toutes les éventualités.
                {
                        printf("Ce n est pas ca il faut chercher un nombre plus grand \n");
                }
            }while(nombre != nombreADeviner);
        }
        else if(soloOuDuo == 4)
        {
            int joueur1 = 0;
            int joueur2 = 0;
            printf("Joueur 1, veuillez introduire un nombre à faire deviner à votre voisin");
            scanf("%d", &joueur1);
            printf("Joueur 2, veuillez introduire un nombre à faire deviner à votre voisin");
            scanf("%d", &joueur2);
        }
        else
        {
            return 0;
        }

        printf("Voilà, vous avez joue en %d coups \n\n ", nombreDEssai);

        printf("Recommencer la partie ? \n ");
        printf("5 = non merci \n ");
        printf("6 = ouiii \n ");
        scanf("%d", &continuerPartie);

    }while(continuerPartie == 6);

    return 0;
}
