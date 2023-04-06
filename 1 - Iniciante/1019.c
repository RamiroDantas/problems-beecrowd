#include <stdio.h>

int main() {
    int s;
    int h, min;
    scanf("%d", &s);
    
    h = s / 3600;
    s = s % 3600;
    
    min = s / 60;
    s = s % 60;
    
    printf("%d:%d:%d\n", h, min, s);
    
}