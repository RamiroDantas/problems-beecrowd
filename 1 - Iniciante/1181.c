#include <stdio.h>

int main(void) {
  int l;
  char t;
  double m[12][12], result;

  scanf("%d\n %c\n", &l, &t);

  for(int i = 0; i <= 11; i++){
    for(int j = 0; j <= 11; j++){
      scanf("%lf", &m[i][j]);
    }
  }

  for(int j = 0; j <= 11; j++){
    result = result + m[l][j];
  }


  if(t == 'S'){
    printf("%.1lf\n", result);
  } else if(t == 'M'){
    result = result / 12;
    printf("%.1lf\n", result);
  }
}