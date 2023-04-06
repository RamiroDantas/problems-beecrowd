#include <stdio.h>

int main() {
    double salario;
    double imposto;
    
    scanf("%lf", &salario);
    
    if(salario <= 2000.00){
        printf("Isento\n");
    } else if(salario > 2000.00 && salario <= 3000.00) {
        imposto = ((salario - 2000.00 ) * 8) / 100;
        printf("R$ %.2lf\n", imposto);
    } else if(salario > 3000.00 && salario <= 4500.00){
        imposto =((1000 * 8) / 100) + (((salario - 3000) * 18) / 100);
        printf("R$ %.2lf\n", imposto);
    } else if(salario > 4500.00){
        imposto = ((1000 * 8) / 100) + ((1500 * 18) / 100) + (((salario - 4500) * 28) / 100);
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}