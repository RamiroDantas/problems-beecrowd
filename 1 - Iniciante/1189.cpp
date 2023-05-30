 #include <bits/stdc++.h>
using namespace std;

int main() {
  double m[12][12], sum = 0;
  char o;

  cin >> o;

  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      cin >> m[i][j];
    }
  }

  int t = 0;
  for(int i = 0; i < 12; i++){
    for(int j = 0; j < 12; j++){
      if(j < t && j+i <= 10){
        sum += m[i][j];
      }
    }
    if(t <= 5){
      t++;
    }
    
  }
  cout.precision(1);
  cout << fixed;
  if(o == 'S') cout << sum << endl;
  else if(o == 'M') cout << sum/30 << endl;
}