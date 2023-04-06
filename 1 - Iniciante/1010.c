#include <stdio.h>

int main(){
    int id, qnt, id2, qnt2;
    double value, value2;
    
    scanf("%d %d %lf", &id, &qnt, &value);
    scanf("%d %d %lf", &id2, &qnt2, &value2);
    
    float valuePay = (value * qnt) + (value2 * qnt2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valuePay);
    
}