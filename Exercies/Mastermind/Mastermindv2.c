#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define TMAX 4
#define NBMAX 9
#define MIN 0
#define SDL printf("\n");

void Color(int couleurDuTexte,int couleurDeFond);
void InitTabSecret(int codeSecret[TMAX]);
int NombreRouge(int entreeJoueur[TMAX], int codeSecret[TMAX]);
int NombreVert(int entreeJoueur[TMAX], int codeSecret[TMAX]);
int Verif(int codeSecret[TMAX], int entreeJoueur[TMAX]);

int main(int argc, char const *argv[])
{
	int codeSecret[TMAX], entreeJoueur[TMAX], i;

	//Initialisation fonction srand
    srand(time(NULL));

    InitTabSecret(codeSecret);
    SDL


	printf("Saisissez les valeurs une par une\n");
    for(i = 0; i < TMAX; i++)
    {
    	printf("Nombre n°%d\n", i);
    	scanf("%d", &entreeJoueur[i]);
    	fflush(stdin);
    }

	return 0;
}

void InitTabSecret(int codeSecret[TMAX])
{
	int i, random = 0;

	for (i = 0; i < TMAX; ++i)
	{
		random = (rand() % (NBMAX - MIN + 1)); //Nombre aléatoire entre 0 et 9 (inclus)
		codeSecret[i] = random;
		printf("%d", codeSecret[i]);

	}
}

void Jeu(int codeSecret[TMAX], int entreeJoueur[TMAX])
{
	verif(entreeJoueur, codeSecret);
}

int NombreRouge(int entreeJoueur[TMAX], int codeSecret[TMAX])
{
	int i;

	for (i = 0; i < TMAX; ++i)
	{
		if (entreeJoueur[i] != codeSecret[0] || entreeJoueur[i] != codeSecret[1] || entreeJoueur[i] != codeSecret[2] || entreeJoueur[i] != codeSecret[3])
		{
			printf("%d\n", entreeJoueur[i]);
			Color(4, 0);

			return 1;
		}
	}
}

int NombreVert(int entreeJoueur[TMAX], int codeSecret[TMAX])
{
	int i;
	for (i = 0; i < TMAX; ++i)
	{
		if(entreeJoueur[i] == codeSecret[0] || entreeJoueur[i] == codeSecret[1] || entreeJoueur[i] == codeSecret[2] || entreeJoueur[i] == codeSecret[3])
		{
			printf("%d\n", entreeJoueur[i]);
			Color(10, 0);
		}
	}

	if (entreeJoueur[i] == codeSecret[i])
	{
		return 0;
	}
}

int Verif(int codeSecret[TMAX], int entreeJoueur[TMAX])
{
	NombreVert(entreeJoueur, codeSecret);
	NombreRouge(entreeJoueur, codeSecret);
}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}