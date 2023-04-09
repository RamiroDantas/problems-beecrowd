#include <stdio.h>

int main(void) {
  int vectorNum[3];
  int vectorInit[3];
  for(int i = 0; i < 3; i++){
    scanf("%d", &vectorNum[i]);
  }
  for(int i = 0; i < 3; i++){
    vectorInit[i] = vectorNum[i];
  }

  //Ordenação do menor para o maior.

  for(int i = 0; i < 3; i++){
    int j = 1 + i;
    while(j < 3){
      if(vectorNum[i] > vectorNum[j]){
        int num = vectorNum[j];
        vectorNum[j] = vectorNum[i];
        vectorNum[i] = num;
      }
      j++;
    }
  }

  for(int i = 0; i < 3; i++){
    printf("%d\n", vectorNum[i]);
  }

  printf("\n");

  for(int i = 0; i < 3; i++){
    printf("%d\n", vectorInit[i]);
  }
  
}