#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ChoixDuMenu;

    printf("----MENU----");
    printf("Selectionner par un nombre le menu que vous souhaitez :\n\n");
    printf("MENU  N 1 : Royal Cheese \n");
    printf("MENU  N 2 : Mc Deluxe\n");
    printf("MENU  N 3 : Mc Bacon\n");
    printf("MENU  N 4 : Big Mac\n");
    printf("Votre choix : N ? ");
    scanf("%d", &ChoixDuMenu);

    printf("\n\n");

    // Voilà ci-dessous on créé une fonction :
    switch (ChoixDuMenu)
    {
        case 1 :
            printf("Votre choix N 1, le Royal Cheese");
            break;
        case 2 :
            printf("Votre choix N 2, Mc Deluxe");
            break;
        case 3 :
            printf("Votre choix N 3, Mc Bacon");
            break;
        case 4 :
            printf("Votre choix N 4, Big Mac");
            break;
        default :
            printf("Désolé, veuillez recommencer, avec qu'un seul chiffre entre 1 et 4");
            break;
    }
    printf("\n\n");

    return 0;  // Ici cette ligne permet de revenir à la ligne précédent le 1, première ligne.
}
