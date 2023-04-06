#include <stdio.h>

int main() {
  int qnt, id;
  double value;
  scanf("%d %d", &id, &qnt);
  
  if(id == 1){
      value = 4.00 * qnt;
      printf("Total: R$ %.2lf\n", value);
  } else if(id == 2){
      value = 4.50 * qnt;
      printf("Total: R$ %.2lf\n", value);
  } else if(id == 3){
      value = 5.00 * qnt;
      printf("Total: R$ %.2lf\n", value);
  } else if(id == 4){
      value = 2.00 * qnt;
      printf("Total: R$ %.2lf\n", value);
  } else if(id == 5){
      value = 1.50 * qnt;
     printf("Total: R$ %.2lf\n", value);
  }
}