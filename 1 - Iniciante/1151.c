#include <stdio.h>

int main(void) {
  int n, k = 0, t = 1;
  scanf("%d", &n);

  printf("0 1");

  for(int i = 0; i < n-2; i++){
    t += k;
    printf(" %d", t);
    k = t - k;
  }

  printf("\n");
  
}  