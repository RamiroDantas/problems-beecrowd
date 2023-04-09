#include <stdio.h>

int main(void) {
  char vectorNum[100];
  int bin = 0;

  //Número de Má Sortes Pequenos.

  scanf("%s", vectorNum);

  for(int i = 0; i < 100; i++) {
    if(vectorNum[i] == '1' && vectorNum[i + 1] == '3') {
      bin = 1;
      break;
    }
  }

  if(bin == 1){
    printf("%s es de Mala Suerte\n", vectorNum);
  } else if(bin == 0){
    printf("%s NO es de Mala Suerte\n", vectorNum);
  }
  
  
}