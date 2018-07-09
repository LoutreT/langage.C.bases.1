#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
    const int MIN = 1;
    int MAX = 0;  // Ici j avais oublié de supprimer la constante pour modifier le choix de level entre 100, 1000 et 10000 !

    int nombreADeviner = 0;  // Ici j'ai choisi de séparer mes 'int' en plusieurs lignes séparées
    int nombre = 0;
    int nombreDEssai = 0;
    int continuerPartie = 0;
    int soloOuDuo = 0;
    int level = 0;


    srand(time(NULL));

    printf(" Hello ! Voici le jeu du nom 'Plus Ou Moins'\n\n   La regle du jeu est de mettre un \n   nombre jusqu a ce que vous trouviez le bon nombre cache\n");

    do
    {
        printf("\n Comment desirez vous le jouer ? \n   Vous souhaiteriez jouer en solo ou bien vous \n   etes deux personnes qui souhaiteraient faire deviner \n   entre elles le bon nombre a deviner ?\n");
        printf("\n  choisissez en tapant 3 ou 4");
        printf("\n  3 = En solo");
        printf("\n  4 = A deux \n");
        scanf("%d", &soloOuDuo);

        if(soloOuDuo == 3)
        {
            printf(" A quel LEVEL voulez-vous remporter le challenge \n   Choix Numero 1 pour de 1 a 100 \n   Choix Numero 2 pour de 1 a 1000 \n   Choix Numero 3 pour de 1 a 10000 ?");
            printf("\n Choisissez en tapant 1, 2 ou 3\n");
            scanf("%d", &level);

            switch(level)
            {
                case 1 : MAX = 100;
                    nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
                    printf("\n  Voici, choisissez un nombre entre 0 et 100 \n\n");
                    break;
                case 2 : MAX = 1000;
                    nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
                    printf("\n  Voici, choisissez un nombre entre 0 et 1000 \n\n");
                    break;
                case 3 : MAX = 10000;
                    nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
                    printf("\n  Voici, choisissez un nombre entre 0 et 10000 \n\n");
                    break;
                default :
                    printf("  Veuillez recommencer votre choix de LEVEL entre 1, 2 et 3\n");
                    break;
            }


            nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;
            // printf(nombreADeviner);  // ---> Pour un test, à cause de cette ligne, mon jeu ne fonctionnait plus.

            do
            {
                nombreDEssai++;
                scanf("%d", &nombre);

                if (nombre == nombreADeviner)
                {
                    printf(" Voici, c'est le bon nombre !\n\n ");
                }
                else if(nombre > nombreADeviner)
                {
                    printf(" Non, il faut chercher un nombre plus petit \n");
                }
                else if (nombre < nombreADeviner)  // ---> J ai choisi else if au lieu de else pour garder la condition exclusive propre à celle-ci parmis toutes les éventualités.
                {
                        printf(" Ce n est pas ca il faut chercher un nombre plus grand \n");
                }
            }while(nombre != nombreADeviner);
        }
        else if(soloOuDuo == 4)
        {
            int joueur1 = 0;
            int joueur2 = 0;
            int devinette1 = 0 ;
            int devinette2 = 0 ;

            printf(" Joueur 1, votre pseudo sera Dracula, veuillez introduire discretement un nombre a faire deviner a votre voisin et appuyer sur ENTER");
            scanf("%d", &joueur1);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

            printf("Joueur 2, votre pseudo sera T-Rex, veuillez introduire discretement un nombre a faire deviner a votre voisin et appuyer sur ENTER");
            scanf("%d", &joueur2);
            printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");

            do
            {
                nombreDEssai++;
                /////////////////////////////// Dracula //////////////////////////////////////
                printf("\n  T-Rex, quel est le nombre enregistre par Dracula ?");
                scanf("%d", &devinette2);

                if(devinette2 == joueur1)
                {
                    printf("\n  T-Rex, mon beau carnivore, vous avez gagne, vous avez eu Dracula.\n");
                }
                else if(devinette2 > joueur1)
                {
                    printf("\n  Ce n'est pas ca, cherchez un nombre plus petit sinon pas de viandes, cela dit y a du bon poisson frais au frigo\n");
                }
                else if(devinette2 < joueur1)
                {
                    printf("\n  Non, cherchez un nombre plus grand, y aura de la bonne chaire\n");
                }

                /////////////////////////////// T-Rex //////////////////////////////////////
                printf("\n  Dracula, quel est le nombre enregistre par T-Rex ?");
                scanf("%d", &devinette1);

                if(devinette1 == joueur2)
                {
                    printf("\n  Dracula, vous avez gagner, vous avez eu T-Rex par derriere, mais bonne chance quand meme avec cette bebete\n");
                }
                else if(devinette1 > joueur2)
                {
                    printf("\n  Essayez en cherchant un nombre plus petit, pour mieux le saigner\n");
                }
                else if(devinette1 < joueur2)
                {
                    printf("\n  mmmh, cherchez un nombre plus grand y a du sot-l-y-laisse par la, miam miam \n");
                }

            }while(devinette2 != joueur1 && devinette1 != joueur2);

        }
        else
        {
            printf("Vous semblez ne pas avoir choisi 3 ou 4, donc abandon.");
            return ;
        }

        printf("\n\n Voila, vous avez joue comme des saigneurs en %d coups \n\n ", nombreDEssai);

        printf("\n Recommencer la partie ? choisissez en tapant 5 ou 6 \n ");
        printf("5 = non merci \n ");
        printf("6 = ouiii \n ");
        scanf("%d", &continuerPartie);
        nombreDEssai = 0;
    }while(continuerPartie == 6);

    return 0;
}
