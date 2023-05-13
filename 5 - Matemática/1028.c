#include <stdio.h>

int main(void) {
  int n, j = 0;
  
  scanf("%d", &n);

  while(j < n){
    int mao1, mao2, mdc = 1;
    scanf("%d %d", &mao1, &mao2);
    int i = 2;
    while(i < 8000){
      if(mao1 % i == 0 && mao2 % i == 0){
        mdc = mdc * i;
        mao1 = mao1 / i;
        mao2 = mao2 / i;
      } else {
        i++;
      }
    }

    printf("%d\n", mdc);
    
    j++;
  }
}