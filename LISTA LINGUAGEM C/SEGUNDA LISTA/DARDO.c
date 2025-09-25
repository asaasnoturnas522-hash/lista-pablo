#include <stdio.h> 
 
int main() { 
    float d1, d2, d3, maior; 
 
    printf("Digite a distancia do 1o lancamento: "); 
    scanf("%f", &d1); 
    printf("Digite a distancia do 2o lancamento: "); 
    scanf("%f", &d2); 
    printf("Digite a distancia do 3o lancamento: "); 
    scanf("%f", &d3); 
 
    maior = d1; 
    if (d2 > maior) maior = d2; 
    if (d3 > maior) maior = d3; 
 
    printf("A maior distancia foi: %.2f\n", maior); 
 
    return 0; 
} 
