#include <stdio.h>

int main(void) {

  int i = 1;
  
  for(int j = 60; j >= 0; j = j - 5){
    printf("I=%d J=%d\n", i, j);
    i = i + 3;
  }
}