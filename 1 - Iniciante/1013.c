#include <stdio.h>
#include <math.h>
int main() {
    
    int a, b, c;
    int maiorAB, maiorABC;
    
    scanf("%d %d %d", &a, &b, &c);
    
    maiorAB = (a + b + abs(a - b)) / 2;
    maiorABC = (maiorAB + c + abs(maiorAB - c)) / 2;

    printf("%d eh o maior\n", maiorABC);

    return 0;
}