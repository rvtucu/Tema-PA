#include <stdio.h>
#include "cod_processing.h"
#include "operatii_minime.h"

int main() {
    char cod[1000];
    char reguli[1000];

    // Citirea fragmentului de cod și a regulilor de sintaxă
    citesteCod(cod);
    citesteReguli(reguli);

    // Calculul numărului minim de operații necesare și afișarea rezultatului
    int rezultat = numarMinimOperatii(cod, reguli);
    afiseazaRezultat(rezultat);

    return 0;
}
