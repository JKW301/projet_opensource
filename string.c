#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int esgi_strlen(const char texte[]) {
    int length = 0;
    while (texte[length] != '\0') {
        length++;
    }
    return length;
}

/*la fonction esgi_strcpy et esgi_strcat est sont des fonction void car comme elles modtifient
le tableau destination et dest_len et il est donc inutile de renvoyer une valeur */

void esgi_strcpy(char destination[], const char source[]) {
//soucrce[i] renvoie à la valeur à l'indice i
    int i;
    for (int i = 0; source[i] != '\0'; i++) {
        destination[i] = source[i];
    }
    destination[i] = '\0';
}

void esgi_strcat(char destination[], const char source[]) {
    int dest_len = esgi_strlen(destination);
    int i;
    for (i = 0; source[i] != '\0'; i++) {
        destination[dest_len + i] = source[i];
    }
    destination[dest_len + i] = '\0';
}

int esgi_strcmp(const char first[], const char second[]) {
    int i;
    for (i = 0; first[i] != '\0' || second[i] != '\0'; i++) {
        if (first[i] != second[i]) {
            return first[i] - second[i];
        }
    }
    //si first[i] - second[i], on écrit return 0
    return 0;
}


int main() {
    char texte[] = "Welcome to ESGI!";
    char hello[] = "Hello";
    char copie[50];
    printf("esgi_strlen(\"%s\") = %d\n", texte, esgi_strlen(texte));
    esgi_strcpy(copie, "Eleve, ");
    printf("copie = \"%s\"\n", copie);
    esgi_strcat(copie, texte);
    printf("copie = \"%s\"\n", copie);
    printf("esgi_strcmp(\"Hello\", \"Hello\") = %d = 0\n", esgi_strcmp(hello, "Hello"));
    printf("esgi_strcmp(\"Hello\", \"Bonjour\") = %d > 0\n", esgi_strcmp(hello, "Bonjour"));
    printf("esgi_strcmp(\"Hello\", \"Hell\") = %d > 0\n", esgi_strcmp(hello, "Hell"));
    printf("esgi_strcmp(\"Bonjour\", \"Hello\") = %d < 0\n", esgi_strcmp("Bonjour", hello));

    exit(EXIT_SUCCESS);
}

