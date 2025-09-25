#include <stdio.h> 
int main() {
  double distancia, combustivel, consumo; 
  scanf("%lf", &distancia);
  scanf("%lf", &combustivel); 
  consumo = distancia / combustivel;
  printf("Consumo medio = %.3lf km/l\n", consumo); 
  return 0; 
}
