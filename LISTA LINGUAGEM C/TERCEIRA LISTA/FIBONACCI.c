 #include <stdio.h>

int main() {
    int n, t1 = 0, t2 = 1, prox;

    printf("Digite a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Quantidade invalida!\n");
    } else {
        printf("Sequencia de Fibonacci com %d termos:\n", n);
        for (int i = 1; i <= n; i++) {
            printf("%d ", t1);
            prox = t1 + t2;
            t1 = t2;
            t2 = prox;
        }
        printf("\n");
    }

    return 0;
}
