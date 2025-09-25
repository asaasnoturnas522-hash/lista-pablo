#include <stdio.h>

int main() {
    int n;
    unsigned long long fat = 1; // suporta números grandes

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        for (int i = 1; i <= n; i++) {
            fat *= i;
        }
        printf("Fatorial de %d = %llu\n", n, fat);
    }

    return 0;
}
 
