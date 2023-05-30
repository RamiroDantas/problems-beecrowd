#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;

  cin >> n;

  cin.ignore();
  while(n--){
    string a;

    cin >> a;

    int suml = 0;

    for(int i = 0; i < a.size(); i++){
      if(a[i] == '1'){
        suml += 2;
      } else if(a[i] == '2'){
        suml += 5;
      } else if(a[i] == '3'){
        suml += 5;
      } else if(a[i] == '4'){
        suml += 4;
      } else if(a[i] == '5'){
        suml += 5;
      } else if(a[i] == '6'){
        suml += 6;
      } else if(a[i] == '7'){
        suml += 3;
      } else if(a[i] == '8'){
        suml += 7;
      } else if(a[i] == '9'){
        suml += 6;
      } else if(a[i] == '0'){
        suml += 6;
      }
    }

    cout << suml << " leds" << '\n';
  }
}