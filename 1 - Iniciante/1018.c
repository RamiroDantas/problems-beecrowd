#include <stdio.h>

int main() {
    int n, value;
    int n1, n2, n3, n4, n5, n6, n7;
    
    scanf("%d", &value);
    n = value;
    
    n1 = n / 100;
    n = n % 100;

    n2 = n / 50;
    n = n % 50;
    
    n3 = n / 20;
    n = n % 20;

    n4 = n / 10;
    n = n % 10;

    n5 = n / 5;
    n = n % 5;

    n6 = n / 2;
    n = n % 2;

    n7 = n / 1;
    n = n % 1;
        
    printf("%d\n", value);
    printf("%d nota(s) de R$ 100,00\n", n1);
    printf("%d nota(s) de R$ 50,00\n", n2);
    printf("%d nota(s) de R$ 20,00\n", n3);
    printf("%d nota(s) de R$ 10,00\n", n4);
    printf("%d nota(s) de R$ 5,00\n", n5);
    printf("%d nota(s) de R$ 2,00\n", n6);
    printf("%d nota(s) de R$ 1,00\n", n7);
    
    return 0;
}