#include <stdio.h>
#include <math.h>


int main() {
    int a, b, c;
    int bol = 1;
    int ladoMin, area, mq;
    
    
    while(a != 0){
        scanf("%d", &a);
        if(a == 0){
            return 0;
        }
        scanf("%d %d", &b, &c);
        
      
        area =  a * b;
        mq = (area * 100) / c;
        ladoMin = sqrt(mq);
        
        printf("%d\n", ladoMin);
      
    }
    
}