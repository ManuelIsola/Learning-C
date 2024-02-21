#include <stdio.h>

int main() {
    int i, j;

    // Loop externo para a tabuada de 1 a 9
    for (i = 1; i <= 9; i++) {
        // Loop interno para cada multiplicador de 1 a 10
        for (j = 1; j <= 10; j++) {
            // Imprime a multiplicação de i por j
            printf("%d x %d = %d\n", i, j, i * j);
        }

        // Adiciona uma linha em branco entre as tabuadas
        printf("\n");
    }

    return 0;
}