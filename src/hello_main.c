#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	char * nom[60];
	char * prenom[40];
	printf("Entrez votre nom puis votre prénom : \n");
	scanf("%s %s", &nom, &prenom);
	printf("Bonjour %s %s.\n", prenom, nom);
exit(EXIT_SUCCESS);
}
