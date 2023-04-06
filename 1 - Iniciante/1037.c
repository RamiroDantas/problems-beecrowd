#include <stdio.h>
#include <math.h>


int main() {
    float ponto;
    
    scanf("%f", &ponto);
    
    if(ponto >= 0 && ponto <= 25.0000){
        printf("Intervalo [0,25]\n");
    } else if(ponto >= 25.00001 && ponto <= 50.0000000){
        printf("Intervalo (25,50]\n");
    } else if(ponto >= 50.00000001 && ponto <= 75.0000000000){
        printf("Intervalo (50,75]\n");
    } else if(ponto >= 75.00000000001 && ponto <= 100.0000000000000){
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    
}