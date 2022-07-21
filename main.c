#include <stdio.h>

int main() {
  int Peso =0;
  float IMC =0, Altura =0;
  printf("Peso: ");
  scanf("%d" ,&Peso);
  printf("Altura: ");
  scanf("%f", &Altura);

  IMC = Peso/ (Altura*Altura);
  printf("Seu IMC é: %.2f", IMC);
  return 0;
}
