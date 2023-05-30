#include <iostream>
#include <string>
using namespace std;

int main() {
  string p1;

  while (getline(cin, p1)) {
    int letra = 0;
    for (int i = 0; i < p1.size(); i++) {
      if (p1[i] != ' ') {
        if (p1[i] >= 65 && p1[i] <= 90 && letra % 2 != 0) {
          p1[i] += 32;
        } else if (p1[i] >= 97 && p1[i] <= 122 && letra % 2 != 1) {
          p1[i] -= 32;
        }

        letra++;
      }
    }
    cout << p1 << endl;
  }
}