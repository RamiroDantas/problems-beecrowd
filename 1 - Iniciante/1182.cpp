#include <iostream>
using namespace std;

int main() {
  int c;
  char op;
  float matriz[12][12], soma = 0;

  cin >> c;
  cin >> op;

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      cin >> matriz[i][j];
    }
  }

  for(int i = 0; i < 12; i++){
    soma +=  matriz[i][c];
  }

  if(op == 'S'){
    cout.precision(1);
    cout << fixed << soma << '\n';
  } else if(op == 'M'){
    cout.precision(1);
    cout << fixed << soma/12 << '\n';
  }
  
  
}