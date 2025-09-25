#include <stdio.h>

int main() {
    int v1[5], v2[5], v3[10];
    int i, j = 0;

    // Leitura do primeiro vetor
    printf("Digite 5 numeros para o primeiro vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("v1[%d]: ", i);
        scanf("%d", &v1[i]);
    }

    // Leitura do segundo vetor
    printf("\nDigite 5 numeros para o segundo vetor:\n");
    for (i = 0; i < 5; i++) {
        printf("v2[%d]: ", i);
        scanf("%d", &v2[i]);
    }

    // Intercalando os vetores em v3
    for (i = 0; i < 5; i++) {
        v3[j++] = v1[i];
        v3[j++] = v2[i];
    }

    // Mostrando o vetor intercalado
    printf("\nVetor intercalado: ");
    for (i = 0; i < 10; i++) {
        printf("%d ", v3[i]);
    }
    printf("\n");

    return 0;
}
