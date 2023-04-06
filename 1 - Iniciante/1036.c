#include <stdio.h>
#include <math.h>

int main() {
    double A, B, C;
    double R1, R2, Delta;
    
    scanf("%lf %lf %lf", &A, &B, &C);
    
    if(A == 0){
        printf("Impossivel calcular\n");
        return 0;
    }
    
    Delta = (pow(B, 2)) - (4 * A * C);
    
    if(Delta < 0){
        printf("Impossivel calcular\n");
        return 0;
    } else {
        R1 = ((B * (-1)) + sqrt(Delta)) / (2 * A);
        R2 = ((B * (-1)) - sqrt(Delta)) / (2 * A);
        
        printf("R1 = %.5lf\n", R1);
        printf("R2 = %.5lf\n", R2);
    }
    
}