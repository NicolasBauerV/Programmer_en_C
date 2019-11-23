#include <stdio.h> //Inclusion bibliothèque Stdio.h
#include <stdlib.h>
#include <math.h>

#define CIAO printf("Au revoir snif\n"); //Message D'au revoir
#define RESET printf("C'est reparti !\n"); // Message de restart du programme
#define SDL printf("\n"); //Saut de ligne
#define TMAX 3 // Valeur Max du tableu pour le morpion


void InitTab(char morpionMatrice[TMAX][TMAX], char valInit); //Prototypes
void AffichTab(char morpionMatrice[TMAX][TMAX]);
void jeuMecanique(char morpionMatrice[TMAX][TMAX], char valInit);
int Victoire(char morpionMatrice[TMAX][TMAX], char joueur1, char joueur2);



int main(int argc, char const *argv[])
{
	//int symbole[2]; //Servira à choisir quel symbole X ou O
	//int i = 0, j = 0; // Servira à choisir quelle ligne et colonne
	char morpionMatrice[TMAX][TMAX], valInit;

	printf("Voici le tableau\n");
	SDL
	printf("Choisissez la valeur d'initialisation\n");
	scanf("%c", &valInit); 
	fflush(stdin); //Libération de la mémoire
	SDL

	InitTab(morpionMatrice, valInit); //Déclaration des fonctions
	AffichTab(morpionMatrice); //Affiche le tableau à l'etat initial
	jeuMecanique(morpionMatrice, valInit);

		
	return 0;
}


void InitTab(char morpionMatrice[TMAX][TMAX], char valInit ) // initialisation du tableau + affichage
{
	int i,j;

	for (i = 0; i < TMAX; ++i)//Lignes
	{
		for (j = 0; j < TMAX; ++j) //Colonnes
		{
			morpionMatrice[i][j] = valInit; //Initialisation avec '-' comme caractère
			/* printf("%c", ligne[i][j]); = Affichage du tableau */
		}
		SDL
	}	
}


void AffichTab(char morpionMatrice[TMAX][TMAX]) // initialisation du tableau + affichage
{
	int i,j;
	system("cls"); //Commande Console
	printf("Voici le tableau\n");
	SDL

	for (i = 0; i < TMAX; ++i)//Lignes
	{
		for (j = 0; j < TMAX; ++j) //Colonnes
		{
			printf("%c", morpionMatrice[i][j]); // Affichage du tableau 
		}
		SDL
	}	
}


void jeuMecanique(char morpionMatrice[TMAX][TMAX], char valInit)
{
	int choix, i, j, nFull, fin = 0;
	char joueur1;
	char joueur2;
	printf("Choisissez quelle symbole aura le premier joueur.\n");
	scanf("%c", &choix); fflush(stdin);
	joueur1 = choix;
	SDL
	printf("Choisissez quelle symbole aura le deuxieme joueur.\n");
	scanf("%c", &choix); fflush(stdin);
	joueur2 = choix;
	SDL

	while(nFull < TMAX*TMAX && fin != 1)
	{	
		if (nFull%2 == 1)
		{
			printf("Au tour du J1\n");
		}
		else
		{
			printf("Au tour du J2\n");

		}

		printf("Choisissez une ligne\n");
		scanf("%d", &i);
		fflush(stdin);

		if(i < TMAX+1 && i > 0) //Solution possibles : 1, 2 ou 3
		{
			i--; //On fait en sorte que le i soit entre 0 et 3 (inclus)

			SDL
			printf("Choisissez une colonne\n");
			scanf("%d", &j);
			fflush(stdin);

			if(j < TMAX+1 && j > 0) //Solution possibles : 1, 2 ou 3
			{
				j--; //On fait en sorte que le j soit entre 0 et 3 (inclus)

				if(morpionMatrice[i][j] == valInit) // Si La case en question est égale à la valeur initial alors ecris un symbole sinon non
				{

					if (nFull%2 == 1) //On divise par 2 si il reste 0 à chaque tour le joueur 1 jouera
					{
						morpionMatrice[i][j]=joueur1;
					}
					else //Sinon le joueur 2 jouera
					{
						morpionMatrice[i][j]=joueur2;
					}
					AffichTab(morpionMatrice);
					fin = Victoire(morpionMatrice, joueur1, joueur2);
					switch(fin)
					{
						case 1:
							printf("Joueur 1 gagne\n");
						break;
						case 2:
							printf("joueur2 gagne\n");
						break;

						default : 
							break;
					}
					nFull++;
				}	
			}
		}

	}
}

int Victoire(char morpionMatrice[TMAX][TMAX], char joueur1, char joueur2)
{
	if(((morpionMatrice[0][0]==joueur1)&&(morpionMatrice[0][1]==joueur1)&&(morpionMatrice[0][2]==joueur1))/*correspond à la ligne 1*/||
	((morpionMatrice[1][0]==joueur1)&&(morpionMatrice[1][1]==joueur1)&&(morpionMatrice[1][2]==joueur1))/*correspond à la ligne 2*/||
	((morpionMatrice[2][0]==joueur1)&&(morpionMatrice[2][1]==joueur1)&&(morpionMatrice[2][2]==joueur1))/*correspond à la ligne 3*/||
	((morpionMatrice[0][0]==joueur1)&&(morpionMatrice[1][0]==joueur1)&&(morpionMatrice[2][0]==joueur1))/*correspond à la colonne 1*/||
	((morpionMatrice[0][1]==joueur1)&&(morpionMatrice[1][1]==joueur1)&&(morpionMatrice[2][1]==joueur1))/*correspond à la colonne 2*/||
	((morpionMatrice[0][2]==joueur1)&&(morpionMatrice[1][2]==joueur1)&&(morpionMatrice[2][2]==joueur1))/*correspond à la colonne 3*/||
	((morpionMatrice[0][0]==joueur1)&&(morpionMatrice[1][1]==joueur1)&&(morpionMatrice[2][2]==joueur1))/*correspond à la diagonale 1*/||
	((morpionMatrice[0][2]==joueur1)&&(morpionMatrice[1][1]==joueur1)&&(morpionMatrice[2][0]==joueur1))/*correspond à la diagonale 2*/)
	{
		return 1;
	}
	if(((morpionMatrice[0][0]==joueur2)&&(morpionMatrice[0][1]==joueur2)&&(morpionMatrice[0][2]==joueur2))/*correspond à la ligne 1*/||
	((morpionMatrice[1][0]==joueur2)&&(morpionMatrice[1][1]==joueur2)&&(morpionMatrice[1][2]==joueur2))/*correspond à la ligne 2*/||
	((morpionMatrice[2][0]==joueur2)&&(morpionMatrice[2][1]==joueur2)&&(morpionMatrice[2][2]==joueur2))/*correspond à la ligne 3*/||
	((morpionMatrice[0][0]==joueur2)&&(morpionMatrice[1][0]==joueur2)&&(morpionMatrice[2][0]==joueur2))/*correspond à la colonne 1*/||
	((morpionMatrice[0][1]==joueur2)&&(morpionMatrice[1][1]==joueur2)&&(morpionMatrice[2][1]==joueur2))/*correspond à la colonne 2*/||
	((morpionMatrice[0][2]==joueur2)&&(morpionMatrice[1][2]==joueur2)&&(morpionMatrice[2][2]==joueur2))/*correspond à la colonne 3*/||
	((morpionMatrice[0][0]==joueur2)&&(morpionMatrice[1][1]==joueur2)&&(morpionMatrice[2][2]==joueur2))/*correspond à la diagonale 1*/||
	((morpionMatrice[0][2]==joueur2)&&(morpionMatrice[1][1]==joueur2)&&(morpionMatrice[2][0]==joueur2))/*correspond à la diagonale 2*/)
	{
		return 2;
	}
	else
		return 0;
}