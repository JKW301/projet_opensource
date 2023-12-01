#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	char * prenom[60];
	char * nom[60];
	printf("Entrez votre prenom : \n");
	scanf("%s", prenom);
	printf("Entrez votre nom : \n");
	scanf("%s", nom);
	printf("Bonjour %s %s.\n", prenom, nom);
exit(EXIT_SUCCESS);
}
