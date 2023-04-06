#include <stdio.h>
#include <math.h>


int main() {
  double a, b;
  double pib = 100, flutuacao;

  scanf("%lf %lf", &a, &b);

  flutuacao = (a * pib) / 100;
  
  pib = pib + flutuacao;

  flutuacao = (b * pib) / 100;

  pib = pib + flutuacao;

  flutuacao = pib - 100;

  printf("%.6lf\n", flutuacao);
    
}