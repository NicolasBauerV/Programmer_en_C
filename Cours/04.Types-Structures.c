/*Apprendre les Types Structurés*/

#include <stdio.h>

typedef struct tPoint
{
	int nX;
	int nY;
}tPoint; //Déclaration du nouveau type

struct tPoint2
{
	int nX;
	int nY;
}; 

struct ptPoint
{
	int nX;
	int nY;
}; 
int main(int argc, char const *argv[])
{
	tPoint newPoint;

	//Pointeur
	tPoint *pnewPoint = &newPoint;

	newPoint.nX = 0;
	newPoint.nY = 0;

	pnewPoint -> nX = 10;
	pnewPoint -> nY = 20;

	//Initialisation
	tPoint newPoint2 = {0, 0};



	//Si on a pas de typeDef on doit écrire struct à chaque fois pour rappeler que c'est une structure
	struct tPoint2 newPoint3 = {0, 0};



	return 0;
}