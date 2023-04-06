#include <stdio.h>
#include <math.h>

int main() {
    double value;
    int nota1,nota2,nota3,nota4,nota5,nota6;
    int moeda1, moeda2, moeda3, moeda4, moeda5, moeda6;
    
    scanf("%lf", &value);
    
    int ValueRound = round(value * 100);
    
   
    nota1 = ValueRound / 10000;
    ValueRound = ValueRound - (10000 * nota1);

    nota2 = ValueRound / 5000;
    ValueRound = ValueRound - (5000 * nota2);

    nota3 = ValueRound / 2000;
    ValueRound = ValueRound - (2000 * nota3);

    nota4 = ValueRound / 1000;
    ValueRound = ValueRound - (1000 * nota4);

    nota5 = ValueRound / 500;
    ValueRound = ValueRound - (500 * nota5);

    nota6 = ValueRound / 200;
    ValueRound = ValueRound - (200 * nota6);

    moeda1 = ValueRound / 100;
    ValueRound = ValueRound - (100 * moeda1);
    
    moeda2 = ValueRound / 50;
    ValueRound = ValueRound - (50 * moeda2);
    
    moeda3 = ValueRound / 25;
    ValueRound = ValueRound - (25 * moeda3);
    
    moeda4 = ValueRound / 10;
    ValueRound = ValueRound - (10 * moeda4);
    
    moeda5 = ValueRound / 5;
    ValueRound = ValueRound - (5 * moeda5);
    
    moeda6 = ValueRound / 1;
    ValueRound = ValueRound - (1 * moeda6);
    
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", nota1);
    printf("%d nota(s) de R$ 50.00\n", nota2);
    printf("%d nota(s) de R$ 20.00\n", nota3);
    printf("%d nota(s) de R$ 10.00\n", nota4);
    printf("%d nota(s) de R$ 5.00\n", nota5);
    printf("%d nota(s) de R$ 2.00\n", nota6);
    printf("MOEDAS:\n");
    printf("%d moeda(s) de R$ 1.00\n", moeda1);
    printf("%d moeda(s) de R$ 0.50\n", moeda2);
    printf("%d moeda(s) de R$ 0.25\n", moeda3);
    printf("%d moeda(s) de R$ 0.10\n", moeda4);
    printf("%d moeda(s) de R$ 0.05\n", moeda5);
    printf("%d moeda(s) de R$ 0.01\n", moeda6);
    
    return 0;
}