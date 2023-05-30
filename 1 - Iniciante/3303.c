#include <stdio.h>

int main(void) {
  char palavra[20];
  int k = 0;
  scanf("%s", palavra);

  for(int i = 0; i < 20; i++){
    if(palavra[i] != '\0'){
      k++;
    } else {
      break;
    }
  }

  if(k >= 10){
    printf("palavrao\n");
  } else {
    printf("palavrinha\n");
  }
}