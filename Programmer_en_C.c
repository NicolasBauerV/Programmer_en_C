#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define NFOIS 5

//Exemple de programme en C

int main(int argc, char const *argv[])
{

    int i;
    float x, racx;

    printf("Bonjour\n");

    printf("je vais vous calcuer %d racines carrees\n", NFOIS);

    for(i = 0; i < NFOIS; i++)
        {
            printf("Donnez un nombre : ");
            scanf("%f", &x);

            if(x < 0.0)
                printf("Le nombre %f ne possède pas de racine carree\n", x);
            else
            {
                racx = sqrt(x);
                printf("Le nombre %f a pour racine carre : %f\n", x, racx);
            }
        }

		printf("Travail termine, Au revoir");

        //Faire un exemple d'une condition en C qui sera découper en deux solutions la première avec un opérateur logique && et || et contient aussi un sinon
        // un exemple avec une boucle tant que, for et do while
        //Faire un exemple avec l'opérateur ternaire

	return 0;

}