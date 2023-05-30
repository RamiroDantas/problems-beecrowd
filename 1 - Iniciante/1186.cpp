#include <iostream>
using namespace std;

int main() {
  float m[12][12], sum;
  char o;

  cin >> o;

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      cin >> m[i][j];
    }
  }

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if(j > 11-i){
        sum += m[i][j];
      }
    }
  }
  cout.precision(1);
  cout << fixed;
  if(o == 'S') cout << sum << endl;
  else if(o == 'M') cout << sum/66 << endl;
}