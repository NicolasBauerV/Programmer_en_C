/*
ENCONCE

1) Ecrire, de deux façons différentes, un programme quui lit 10 nombres entiers dans un tableau avant d'en rechercher le plus grand et le plus petit :
	* En utilisant le formalisme tableau
	* En utilisant le formalisme pointeur, chaque fois que cela est possible
*/

 #include <stdio.h>
 #define NBMAX 10

//Version tableau

int main(int argc, char const *argv[])
{
	int i, min, max;
	int t[NBMAX];

	printf("Bonjour saisissez %d valeurs\n", NBMAX);

	for (i = 0; i < NBMAX; ++i)
	{
		scanf("%d", &t[i]);
	}
	min = t[0];
	max = min;

	for (i = 1; i < NBMAX; ++i)
	{
		if (t[i] > max)
			max = t[i];
		if (t[i] < min)
			min = t[i];
	}

	printf("Valeur Max = %d et valeur Min = %d\n", max, min);
	return 0;
}