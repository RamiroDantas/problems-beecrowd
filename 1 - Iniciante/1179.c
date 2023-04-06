#include <stdio.h>

int main(){
  int n, k, z; 
  int par[5], impar[5];
  

  for(int j=0; j < 15; j++){
    scanf("%d", &n);

    if(n%2==0){
      par[k] = n;
      k++;
    
      if(k==5){
        for(int i = 0; i < 5; i++){
          printf("par[%d] = %d\n", i, par[i]);
        }
        k = 0;
      }
      
    } else {
      impar[z] = n;
      z++;
    
      if(z==5){
        for(int l = 0; l < 5; l++){
          printf("impar[%d] = %d\n", l, impar[l]);
        }
        z = 0;
      }
    }
   
   if(j == 14){
    for(int d =0; d<z; d++){
      printf("impar[%d] = %d\n", d, impar[d]);
    }
  
    for(int t = 0; t<k; t++){
      printf("par[%d] = %d\n", t, par[t]);
    }
  }
    
  }
  
}