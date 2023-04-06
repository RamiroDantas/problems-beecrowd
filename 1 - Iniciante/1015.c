#include <stdio.h>
#include <math.h>

typedef struct {
    double x, y;
} points;


int main() {
    points x, y;
    
    scanf("%lf %lf\n", &x.x, &x.y);
    scanf("%lf %lf", &y.x, &y.y);

    double distance = sqrt(pow((y.x - x.x), 2) + pow((y.y - x.y), 2));
    
    printf("%.4lf\n", distance);

    return 0;
}