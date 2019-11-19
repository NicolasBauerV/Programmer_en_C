#include <stdio.h>
#include "02.exercice.h"

#define RES printf("Somme : %d\n", som);
#define SAUTDL printf("\n");
#define RESTART printf("Voulez vous recommencer ? 1 pour OUI et 0 pour NON\n");

void bouclePour();
void boucleWhile();   //Prototypes
void boucleDoWhile();


int main(int argc, char const *argv[])
{
	int choix = 0, valide = 0;
	do
	{
		printf("Choisissez parmis 3 choix\n");
		SAUTDL
		printf("Entrez 1 pour une boucle For\n");
		SAUTDL
		printf("Entrez 2 pour une boucle While\n");
		SAUTDL
		printf("Entrez 3 pour une boucle Do_While\n");
		scanf("%d", &choix);
		switch(choix)
		{
			case 1 :
				bouclePour();
			break;

			case 2 :
				boucleWhile();
			break;

			case 3 :
				boucleDoWhile();
		}
		RESTART
		scanf("%d", &valide);
	}while(valide != 0);
	return 0;
}


void bouclePour()
{
		int i, n, som;
		som = 0;

	for (int i = 0; i < 4; ++i)
	{
		printf("Donner un entier\n");
		scanf("%d", &n);
		som += n;

		RES		
	}
}

void boucleWhile()
{
	int i =0, n, som =0;

	while(i < 4)
	{
		printf("Donner un entier\n");
		scanf("%d", &n);
		som += n;
		RES
		i++;
	}
}

void boucleDoWhile()
{
	int i =0, n, som =0;
	do
	{
		printf("Donner un entier\n");
		scanf("%d", &n);
		som += n;
		RES
		i++;
	}while(i < 4);
}