#include <stdio.h>

int main() {
    int v1[5], v2[5];
    int produto = 0;

    // Leitura do primeiro vetor
    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    // Leitura do segundo vetor
    printf("\nDigite 5 numeros para o segundo vetor:\n");
    for (int i = 0; i < 5; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    // Cálculo do produto escalar
    for (int i = 0; i < 5; i++) {
        produto += v1[i] * v2[i];
    }

    // Resultado
    printf("\nProduto escalar = %d\n", produto);

    return 0;
}
