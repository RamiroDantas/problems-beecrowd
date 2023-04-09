#include <stdio.h>

int main(void) {
  int a, b;

  scanf("%d %d", &a, &b);
  
  if(b > a && b % a == 0 || a > b && a % b == 0){
    printf("Sao Multiplos\n");
  } else {
    printf("Nao sao Multiplos\n");
  }
  
}