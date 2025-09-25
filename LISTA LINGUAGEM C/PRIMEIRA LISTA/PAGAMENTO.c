#include <stdio.h> 
int main() {
  char nome[50]; 
  double valorHora, pagamento; int horas; 
  scanf("%s", nome); 
  scanf("%lf", &valorHora); 
  scanf("%d", &horas);
  pagamento = valorHora * horas; 
  printf("O pagamento para %s deve ser %.2lf\n", nome, pagamento); 
  return 0;
}
