#include <stdio.h>

int main(void) {
  int fig, base, altura, area, x = 0;
  while (x == 0) {
    printf("Calculadora da área de figuras geometricas\nqual figura geometrica "
           "você deseja calcular?\n1.Triangulo △\n2.Quadrado  ▢ \n3.Retangulo "
           "▭\n4.Circulo •\n\n ");
    scanf("%d", &fig);
    if (fig == 1) {
      printf("Calculando a área de um triangulo △\n Digite o valor da Base\n");
      scanf("%d", &base);
      printf("Digite o valor da altura\n");
      scanf("%d", &altura);
      area = (base * altura) / 2;
      printf("Área do triangulo = %d", +area);
      x = 1;
    } else if (fig == 2) {
      printf("Calculando a área de um Quadrado ▢\n Digite o valor da Base\n");
      scanf("%d", &base);
      area = (base * base);
      printf("Área do Quadrado = %d", +area);
      x = 1;
    } else if (fig == 3) {
      printf("Calculando a área de um Retangulo ▭\n Digite o valor da Base\n");
      scanf("%d", &base);
      printf("Digite o valor da altura\n");
      scanf("%d", &altura);
      area = (base * altura);
      printf("Área do Retangulo = %d", +area);
      x = 1;
    } else if (fig == 4) {
      float raio, pi = 3.14;
      printf("Calculando a área de um Circulo \n Digite o valor do Raio\n");
      scanf("%f", &raio);
      printf("Área do Circulo = %g", pi * (raio * raio));
      x = 1;
    } else {
      printf("\nEscolha uma opção existente!\n\n");
    }
  }
  return 0;
}