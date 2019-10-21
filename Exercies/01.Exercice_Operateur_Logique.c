#include <stdio.h>
#include <windows.h>
#include <time.h>


#define TOURMAX 5 // consistera à indiquer le tour maximum pour la boucle for
#define NBMAX 20 // Nombre maximum pour la boucle While
#define RESSAYEZ printf("Ressayez ce n'est pas grave.\n\n"); // Dans la 5e partie si vous trouvez pas le bon nombre ce message s'affiche
#define VICTOIRE printf("Bien jouer !\n\n");// La même chose mais vous gagnez
#define RECOMMENCER printf("Et c'est reparti !\n"); // Lors du menu de fin, si vous recommencez alors ce message s'affiche
#define AUREVOIR printf("Merci d'avoir utiliser mon programme ! :)\n"); // Message d'adieu
#define SAUTDELIGNE printf("\n"); //Creer pour le saut de ligne


int main(int argc, char const *argv[])
{
	//Initialisation fonction srand
    srand(time(NULL));

	const int NOMBREBMAX = 5; // Déclaration des constantes
	const int MIN = 1;

	int choix = 0, validation = 1, nombreRandom = 0; //Déclarations des variables

	printf("Voici differentes utilisations des operateurs logiques.\n\n");

	do
	{
		int nombre1 = 0, nombre2 = 0, resultat = 0, compteur = 1; //Chaque fois l'utilisateur relancera les variables seront réinitialisées.

		printf("Choisissez quelle utilisation en particulier.\n\n");

		printf("Entrez '1' pour une condition if, else \n(sans operateur logique)\n");
		printf("Entrez '2' pour une condition if, else\n (avec operateur logique)\n");
		printf("Entrez '3' pour une boucle for\n");
		printf("Entrez '4' pour une boucle while\n");
		printf("Entrez '5' pour une boucle do_while\n\n");
		printf("Ps: Si vous choisissez un nombre au dessus de 5 ou en dessous de 0 vous vous retrouverez au menu 'quitter ou recommencer ?'\n\n");
		scanf("%d", &choix);
		SAUTDELIGNE

		if(choix <= 5 || choix >= 0)
		{
			switch(choix)
			{
				case 1 :
					printf("Vous avez choisi d'avoir un exemple de condition if, else (sans operateur logique)\n");
					SAUTDELIGNE
					printf("Veuillez renseigner d'abord un 1er numero\n");
					scanf("%d", &nombre1);
					SAUTDELIGNE
					printf("Veuillez ensuite renseigner un 2eme numero\n");
					scanf("%d", &nombre2);
					SAUTDELIGNE

					if(nombre1 < nombre2) //Si le 1er nombre est < au 2eme nombre, alors \n\n
					{
						printf("Votre 1er nombre: %d est bien inferieur a %d\n", nombre1, nombre2);
						SAUTDELIGNE
					}
					else if(nombre1 == nombre2)
					{
						printf("Votre 1er nombre: %d est egal au 2eme nombre: %d\n", nombre1, nombre2);	
						SAUTDELIGNE
					}
					else
					{
						printf("Votre 1er nombre: %d est superieur au 2eme nombre: %d\n", nombre1, nombre2);
						SAUTDELIGNE
					}
				break;	

				case 2 :
					printf("Vous avez choisi d'avoir un exemple de condition if, else (avec operateur logique)\n");
					SAUTDELIGNE
					printf("Veuillez renseigner d'abord un 1er numero\n");
					scanf("%d", &nombre1);
					SAUTDELIGNE
					printf("Veuillez ensuite renseigner un 2eme numero\n");
					scanf("%d", &nombre2);
					SAUTDELIGNE

					if (nombre1 < nombre2 || nombre2 > nombre1) //Le premier nombre doit-etre inferieur au 2eme nombre
					{
						printf("Vous etes rentre dans la condition\n");
						SAUTDELIGNE
					}
					else if(nombre1 == nombre2)
					{
						printf("Si vous avez choisi d'egaliser les deux nombres\n");
						SAUTDELIGNE
					}
					else
					{
						printf("Vous n'etes pas la condition\n");
						SAUTDELIGNE
					}
				break;

				case 3 :
					
					printf("Vous avez choisi la boucle for\n");
					SAUTDELIGNE
					printf("Veuillez saisir le 1er nombre\n");
					scanf("%d", &nombre1);
					SAUTDELIGNE
					printf("Veuillez saisir le 2eme nombre\n");
					scanf("%d", &nombre2);

					Sleep(1000); //Attente de 1000Ms (soit 1 seconde)

					printf("Nous allons faire une addition en %d tours\n", TOURMAX);
					SAUTDELIGNE

					Sleep(2000); //Attente de 1000Ms (soit 1 seconde)

					for (int i = 0; i < TOURMAX; ++i) // Tant que i est inferieur a 1 alors on continue l'addition jusqu au 5eme tour
					{
						resultat = resultat + nombre1 + nombre2;

						printf("tour %d, l'addition de %d + %d = %d\n", compteur, nombre1, nombre2, resultat);
						compteur++;
						Sleep(1000); //Attente de 1000Ms (soit 1 seconde)
 
					}
				break;

				case 4 : 
					printf("Vous avez choisi la boucle while\n");
					SAUTDELIGNE
					printf("L'exemple consistera a choisir un nombre entre 1 et %d, tant que votre nombre sera inferieur a %d nous ne sortirons pas de la boucle\n", NBMAX, NBMAX);
					SAUTDELIGNE
					printf("Choisissez quel nombre...\n");
					scanf("%d", &nombre1);

					if (nombre1 < NBMAX)
					{
						while (nombre1 < NBMAX)
						{
							printf("Votre nombre au debut : %d\n", nombre1);
							nombre1++;
							printf("Votre nombre evolu : %d\n", nombre1);
						}
					}
					else
					{
						printf("Vous n'avez pas respecte la consigne !\n");
						SAUTDELIGNE
					}
				break;

				case 5 : 

					nombreRandom = (rand() % (NOMBREBMAX - MIN + 1)) + MIN;

					printf("Vous avez choisi la boucle do_while\n");
					SAUTDELIGNE
					printf("L'exemple consistera par exemple de choisir un nombre entre 1 et 5 (inclus)\n");
					printf("Le but sera de trouver le nombre choisi aleatoirement\n");
					SAUTDELIGNE
					printf("Voici les nombres\n");
					SAUTDELIGNE

					do
					{	
						printf("1\n");
						printf("2\n");
						printf("3\n");
						printf("4\n");
						printf("5\n");
						SAUTDELIGNE

						printf("Choisissez un nombre...\n");
						scanf("%d", &nombre1);
						printf("\n");

						if (nombre1 != nombreRandom)
						{
							RESSAYEZ
						}
					}while(nombre1 != nombreRandom);
					VICTOIRE
				break;
			}
		}

		printf("Voulez vous recommencez ? \n");
		SAUTDELIGNE
		printf("Saisissez '1' pour OUI ou '0' pour NON\n");
		scanf("%d", &validation);
		SAUTDELIGNE

		if (validation == 0)
			AUREVOIR
		else if (validation == 1)
			RECOMMENCER
			SAUTDELIGNE
			SAUTDELIGNE
		
	}while(validation != 0);

	
	return 0;
}