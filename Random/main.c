#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    const int MAX = 100;
    const int MIN = 1;
    int nombreADeviner = 0;
    int nombre = 0;

    srand(time(NULL));
    nombreADeviner = (rand() % (MAX - MIN + 1)) + MIN;

    printf("Hello ! Auteur Vincent Nassaux presente son premier essai\n\n");

    do
    {
        printf("choisissez un nombre entre 0 et 100\n\n");
        scanf("%d", &nombre);


        if (nombre == nombreADeviner)
            printf("C'est le bon nombre !\n");

        else if(nombre > nombreADeviner)
            printf("Cherchez un nombre plus petit \n");

        else if(nombre < nombreADeviner)
            printf("Cherchez un nombre plus grand \n");

    }while(nombre != nombreADeviner);

    return 0;
}
