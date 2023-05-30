#include <iostream>
#include <string>
using namespace std;

int main() {
  string p1, p2;

  while (getline(cin, p1), getline(cin, p2)) {
    int n = 0, t = 0;
    for (int i = 0; i < p1.size(); i++) {
      if(p1[i] == '\0') break;
      for (int j = 0; j < p2.size(); j++) {
        if (p1[i] == p2[j]) {
          t++;
          int d = i+1, k = j+1;
          while(d < p1.size() || k < p2.size()){
            if(p1[d] == p2[k]){
              t++;
            } else {
              break;
            }
            d++; k++;
          }
        }

        if(t > n) {
          n = t;
        }

        t = 0;
      }
      
    }

    cout << n << endl;
  }
}