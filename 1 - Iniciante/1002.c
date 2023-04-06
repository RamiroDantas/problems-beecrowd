#include <stdio.h>
#include <math.h>

int main(){
    double r, a;
    
    scanf("%lf", &r);
    
    a = (pow(r, 2)) * 3.14159;
    
    printf("A=%.4lf\n", a);
}