// cod_processing.c
#include <stdio.h>
#include "cod_processing.h"

void citesteCod(char cod[]) {
    printf("Introduceti fragmentul de cod: ");
    scanf("%s", cod);
}

void citesteReguli(char reguli[]) {
    printf("Introduceti regulile de sintaxa: ");
    scanf("%s", reguli);
}

void afiseazaRezultat(int rezultat) {
    printf("Numarul minim de operatii necesare pentru a corecta erorile de sintaxa: %d\n", rezultat);
}
