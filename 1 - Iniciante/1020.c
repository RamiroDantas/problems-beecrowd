#include <stdio.h>

int main() {
    int dias;
    int ano, meses;
    scanf("%d", &dias);
    
    ano = dias / 365;
    dias = dias % 365;
    
    meses = dias / 30;
    dias = dias % 30;
    
    printf("%d ano(s)\n", ano);
    printf("%d mes(es)\n", meses);
    printf("%d dia(s)\n", dias);
    
    return 0;
}