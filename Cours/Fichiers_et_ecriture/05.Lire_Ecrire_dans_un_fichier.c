#include <stdio.h>

int main(int argc, char const *argv[])
{
	FILE* fichier = NULL;

	fichier = fopen("test.txt", "r+"); //r+ = Lire et écrire dans le fichier en question.

	if (fichier != NULL)
	{
		fputs("Bonjour, tu es en train de me lire !", fichier);
		fclose(fichier);
	}

	return 0;
}