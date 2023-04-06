#include <stdio.h>

int main(){
    int a, b, c, d;
    
    scanf("%d\n %d\n %d\n %d\n", &a, &b, &c, &d);
    
    int dif = (a * b) - (c * d);
    
    printf("DIFERENCA = %d\n", dif);
}