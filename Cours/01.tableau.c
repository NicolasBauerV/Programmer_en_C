#include <stdio.h>

#define TAILLE 10
#define SDL printf("\n");


void afficheTableau();

int main(int argc, char const *argv[])
{
	
	return 0;
}

void afficheTableau()
{
	int nMatriceEntier[TAILLE][TAILLE];

	for (int i = 0; i < TAILLE; i++) //Ligne
	{
		for (int j = 0; j < TAILLE; j++) //Ligne + Colonne
		{
			nMatriceEntier[i][j]=0; //On attribut 0 à toutes les cellules
		}

	}SDL
}