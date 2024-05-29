// operatii_minime.c
#include <string.h>
#include "operatii_minime.h"

// Funcție auxiliară pentru determinarea minimului dintre două numere
int min(int a, int b) {
    return (a < b) ? a : b;
}

// Funcție pentru calculul numărului minim de operații necesare pentru corectarea erorilor de sintaxă
int numarMinimOperatii(char cod[], char reguli[]) {
    int n = strlen(cod);
    int m = strlen(reguli);
    int dp[n + 1][m + 1];

    // Inițializarea matricei dp
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= m; j++) {
            if (i == 0) {
                dp[i][j] = j;
            } else if (j == 0) {
                dp[i][j] = i;
            } else if (cod[i - 1] == reguli[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                if (dp[i - 1][j - 1] <= dp[i][j - 1] && dp[i - 1][j - 1] <= dp[i - 1][j])
        dp[i][j] = 1 + dp[i - 1][j - 1];

                    else if (dp[i][j - 1] <= dp[i - 1][j - 1] && dp[i][j - 1] <= dp[i - 1][j])
         dp[i][j] = 1 + dp[i][j - 1];

                            else
        dp[i][j] = 1 + dp[i - 1][j];
            }
        }
    }

    // Returnează numărul minim de operații necesare
    return dp[n][m];
}
