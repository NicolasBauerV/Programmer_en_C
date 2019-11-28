////**////
///                     Travail entre aide
///     Jérémy FAIVRE - Neil FEDDA - Nicolas BAUER
///
///**////


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

#define NBMAX 9
#define MIN 0
#define TMAX 4
#define SDL printf("\n");

/* ================	PROTOTYPES ================== */

void InitTab(int TabCode[TMAX]);
void AfficheTab(int TabCode[TMAX]);
void Jeu(int t_Joueur[TMAX], int TabCode[TMAX]);
void Verif(int t_Joueur[TMAX], int TabCode[TMAX]);
void Color(int couleurDuTexte,int couleurDeFond);

/* ============================================= */

int main(int argc, char const *argv[])
{
	int codeSecret[TMAX], t_Joueur[TMAX];

	//Initialisation fonction srand
    srand(time(NULL));

    printf("Vous jouez a Mastermind\n");

    InitTab(codeSecret);
    AfficheTab(codeSecret);
    Jeu(t_Joueur, codeSecret);


    return 0;

}


void AfficheTab(int TabCode[TMAX])
{
	system("cls");	// Commande Console "clear screen"
	int i;
	for (i = 0; i < TMAX; ++i)
	{
		printf("%d", TabCode[i]);
	}
}

void InitTab(int TabCode[TMAX])
{
	int i, codeGen = 0;

    for (i = 0; i < TMAX; ++i)
    {
   		codeGen = (rand() % (NBMAX - MIN + 1)); //Nombre aléatoire entre 0 et 9 (inclus)
   		TabCode[i] = codeGen;
    }
}

void Jeu(int t_Joueur[TMAX], int TabCode[TMAX])
{
	int essaies = 12;
	while(essaies != 0)
	{
		int codeJoueur = 0;
		printf("Entrez une valeur svp\n");
	    scanf("%4d", &codeJoueur);
	    fflush(stdin); //Libération de mémoire entrée

	    t_Joueur[0] = codeJoueur % 10000 /1000; //On récupère l'unité de la milleme
	    t_Joueur[1] = codeJoueur % 1000 /100; // On récupère l'unité de la centaine
	    t_Joueur[2] = codeJoueur % 100 /10; // On récupère l'unité de la dizaine
	    t_Joueur[3] = codeJoueur % 10; // On récupère l'unité

	    Verif(t_Joueur, TabCode);
	    essaies--;
	}
}

void Verif(int t_Joueur[TMAX], int TabCode[TMAX])
{
	int i = 0;
	for(i = 0; i < TMAX; i++)
	{
		if (t_Joueur[i] == TabCode[0] || t_Joueur[i] == TabCode[1] || t_Joueur[i] == TabCode[2] || t_Joueur[i] == TabCode[3])
		{
			printf("Nombre mal placer\n");
			Color(14, 0);
			printf("%d\n", t_Joueur[i]);
			Color(7, 0);
		}
		if (t_Joueur[0] == TabCode[0] || t_Joueur[1] == TabCode[1] || t_Joueur[2] == TabCode[2] || t_Joueur[3] == TabCode[3])
		{
			printf("Correct\n");
			Color(10, 0);
			printf("%d\n", t_Joueur[i]);
			Color(7, 0);
		}
		if (t_Joueur[0] == TabCode[0] && t_Joueur[1] == TabCode[1] && t_Joueur[2] == TabCode[2] && t_Joueur[3] == TabCode[3])
		{
			system("cls");
			printf("Bravo vous avez gagne !\n");
		}
	}
}

void Color(int couleurDuTexte,int couleurDeFond) // fonction d'affichage de couleurs
{
        HANDLE H=GetStdHandle(STD_OUTPUT_HANDLE);
        SetConsoleTextAttribute(H,couleurDeFond*16+couleurDuTexte);
}