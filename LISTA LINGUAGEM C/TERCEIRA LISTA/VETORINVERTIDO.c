#include <stdio.h>

int main() {
    int v[10], inv[10];

    // leitura dos 10 números
    for (int i = 0; i < 10; i++) {
        printf("Digite o %dº numero: ", i+1);
        scanf("%d", &v[i]);
    }

    // criando o vetor invertido
    for (int i = 0; i < 10; i++) {
        inv[i] = v[9 - i];
    }

    // mostrando o vetor original
    printf("\nVetor original: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", v[i]);
    }

    // mostrando o vetor invertido
    printf("\nVetor invertido: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", inv[i]);
    }

    printf("\n");

    return 0;
}
