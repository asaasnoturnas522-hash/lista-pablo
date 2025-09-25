#include <stdio.h>
int main() {
  double A, B, C; 
  scanf("%lf %lf %lf", &A, &B, &C);
  double areaQuadrado = A * A;
  double areaTriangulo = (A * B) / 2.0;
  double areaTrapezio = ((A + B) * C) / 2.0;
  printf("Quadrado: %.4lf\n", areaQuadrado); 
  printf("Triangulo: %.4lf\n", areaTriangulo);
  printf("Trapezio: %.4lf\n", areaTrapezio);
  return 0;
}
