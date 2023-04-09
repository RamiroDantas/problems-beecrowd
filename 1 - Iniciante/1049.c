#include <stdio.h>

int main(void) {
  char word1[12], word2[12], word3[12];

  scanf("%s\n %s\n %s", word1, word2, word3);

  if(word1[0] == 'v') {
    if(word2[0] == 'a'){
      if(word3[0] == 'c') {
        printf("aguia\n");
      } else if(word3[0] == 'o'){
        printf("pomba\n");
      }
    } else if(word2[0] == 'm') {
      if(word3[0] == 'o') {
        printf("homem\n");
      } else if(word3[0] == 'h'){
        printf("vaca\n");
      }
    }
  } else if (word1[0] == 'i') {
    if(word2[0] == 'i'){
      if(word3[2] == 'm') {
        printf("pulga\n");
      } else if(word3[2] == 'r'){
        printf("lagarta\n");
      }
    } else if(word2[0] == 'a') {
      if(word3[0] == 'h') {
        printf("sanguessuga\n");
      } else if(word3[0] == 'o'){
        printf("minhoca\n");
      }
    }
  }
}