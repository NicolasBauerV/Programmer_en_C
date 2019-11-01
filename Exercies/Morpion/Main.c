#include <stdio.h> //Inclusion bibliothèque Stdio.h

#define CIAO printf("Au revoir snif\n"); //Message D'au revoir
#define RESET printf("C'est reparti !\n"); // Message de restart du programme
#define SDL printf("\n"); //Saut de ligne
#define TMAX 3 // Valeur Max du tableu pour le morpion


void InitTab(); //Prototype des procédures / fonction
//char Jeu();
//void afficheTableau();


int main(int argc, char const *argv[])
{
	//int symbole[2]; //Servira à choisir quel symbole X ou O
	//int i = 0, j = 0; // Servira à choisir quelle ligne et colonne

	printf("Voici le tableau\n");

	InitTab(); //Déclaration des fonctions



//----------------------------------------------------------------------------------------------------------------

	// TRAVAIL EN COURS

		/*printf("Bonjour vous allez jouer a mon morpion\n");

		printf("Choisissez quel symbole vous convient 1.X ou 0.O\n");
		scanf("%d", &symbole); // on récupére le symbole
		printf("Vous avez choisi %d\n", symbole);

		printf("Choisissez quelle ligne pour inserer votre symbole %d\n", symbole);
		scanf("%d", &i);
		printf("Ensuite choisissez quelle colonne\n");
		scanf("%d", &j);*/

		//afficheTableau();
		//char stockJeu = Jeu(symbole, i, j);

//-------------------------------------------------------------------------------------------------------------------

	return 0;
}


void InitTab() // initialisation du tableau + affichage
{
	int i,j;
	char ligne[3][3];

	for (i = 0; i < TMAX; ++i)//Lignes
	{
		for (j = 0; j < TMAX; ++j) //Colonnes
		{
			ligne[i][j] = '-'; //Initialisation avec '-' comme caractère
			printf("%c", ligne[i][j]); // Affichage du tableau 
		}
		SDL
	}	

}


//--------------------------------------------------------------------------------------------------------------------------


// EN COURS D'ACHEMINEMENT


/*void afficheTableau()
{
	char tableau[3][3];
	int ligne, colonne;

	for (ligne = 0; ligne < TMAX; ++ligne)
	{
		for (colonne = 0; colonne < TMAX; ++colonne)
		{
			printf("%c\n",tableau[ligne][colonne]);
		}
		SDL
	}

}

char Jeu(int symbole, int i, int j)
{
	int validation = 1;
	char morpion[3][3];
	for (i = 0; i < TMAX; ++i)
	{
		for (j = 0; j < TMAX; ++j)
		{
			do
			{
				switch(symbole)
				{
					case '1':
						while(morpion[i+1][j+1] != 'X' || 'O')
						morpion[i+1][j+1] = 'O';
					break;
				}

				printf("Voulez-vous recommencer ? 1.Oui ou 0.Non\n");
				scanf("%d", &validation);

				if (validation == 0)
					CIAO
				else
					RESET

			}while(validation != 0);
		}
	}
	return morpion[i][j];

}*/
