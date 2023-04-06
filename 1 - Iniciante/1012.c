#include <stdio.h>
#include <math.h>
int main() {
    
    double a, b, c;
    double t, ci, tr, q, r;
    
    scanf("%lf %lf %lf", &a, &b, &c);
    
    t = (a * c) / 2;
    ci = pow(c, 2) * 3.14159;
    tr = ((a + b) * c) / 2;
    q = pow(b, 2);
    r = a * b;
    
    printf("TRIANGULO: %.3lf\n", t);
    printf("CIRCULO: %.3lf\n", ci);
    printf("TRAPEZIO: %.3lf\n", tr);
    printf("QUADRADO: %.3lf\n", q);
    printf("RETANGULO: %.3lf\n", r);
    

    return 0;
}