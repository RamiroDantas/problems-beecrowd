#include <stdio.h>

int main(){
    int km;
    double l, cm;
    
    scanf("%d %lf", &km, &l);
    
    cm = km / l;
    
    printf("%.3lf km/l\n", cm);
    
}