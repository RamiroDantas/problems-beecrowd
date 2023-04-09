#include <stdio.h>
#include <math.h>
int main(void) {
  double a, b, c, output;
  int k = 0;
  scanf("%lf %lf %lf", &a, &b, &c);

  if(fabs(b - c) < a && (b + c) > a) {
    if(fabs(a - c) < b && (a + c) > b) {
      if(fabs(a - b) < c && (a + b) > c) {
        output = a + b + c;
        k++;
        printf("Perimetro = %.1lf\n", output);
      }
    }
  }

  if(k == 0) {
    output = ((a + b) * c) / 2;
    printf("Area = %.1lf\n", output);
  }
  
}