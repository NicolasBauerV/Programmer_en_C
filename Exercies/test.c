#include <stdio.h>

int main(int argc, char const *argv[])
{
char car;

    printf("Entrez un caractère\n");
    car=getchar();
    while((car>='a' && car<='z') || (car>='A' && car<='Z')) {

        printf("%c\n",car);
        fflush(stdin);
        car=getchar();
    }
	return 0;
}