#include <stdio.h>

int main() {
    
    char name[100];
    double wage, cash, fcash;
    
    scanf("%s %lf %lf", name, &wage,&cash);
    
    fcash = ((15 * cash) / 100) + wage;
    
    printf("TOTAL = R$ %.2lf\n", fcash);

    return 0;
}