#include <stdio.h>

int main(void) {
  unsigned int a, b;
  
  while(scanf("%u %u", &a, &b) == 2){
   printf("%u\n", (a ^ b));
  }
  
}