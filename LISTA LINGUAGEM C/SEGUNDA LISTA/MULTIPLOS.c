#include <stdio.h> 
 
int main() { 
    int a, b; 
 
    printf("Digite o primeiro numero: "); 
    scanf("%d", &a); 
    printf("Digite o segundo numero: "); 
    scanf("%d", &b); 
 
    if (a % b == 0 || b % a == 0) 
        printf("Sao multiplos.\n"); 
    else 
        printf("Nao sao multiplos.\n"); 
 
    return 0; 
} 
