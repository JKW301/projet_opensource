#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main () {
	char * nom[60];
	printf("Entrez votre nom : \n");
	scanf("%s", nom);
	printf("Bonjour %s.\n", nom);
exit(EXIT_SUCCESS);
}
