#include <stdio.h>

int main() {
    int temp, vm, distancia;
    double litros;
    
    scanf("%d %d", &temp, &vm);
    
    distancia = temp * vm;
    
    litros = (double) distancia / 12;
    
    printf("%.3lf\n", litros);
    
    return 0;
}