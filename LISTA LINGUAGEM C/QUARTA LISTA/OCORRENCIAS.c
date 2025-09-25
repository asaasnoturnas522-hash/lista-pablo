#include <stdio.h>

int contarOcorrencias(int matriz[4][4], int numero) {
    int count = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (matriz[i][j] == numero) {
                count++;
            }
        }
    }
    return count;
}

int main() {
    int matriz[4][4] = {
        {1, 2, 3, 4},
        {2, 3, 4, 5},
        {3, 4, 5, 6},
        {4, 5, 6, 7}
    };
    int numero = 4;
    printf("O número %d aparece %d vezes.\n", numero, contarOcorrencias(matriz, numero));
    return 0;
}
