#include <iostream>
#include <string>
using namespace std;

int main() {
  string p1;
  int n, letras[26];

  cin >> n;

  int i = 0;
  cin.ignore();
  while (i < n) {
    getline(cin, p1);

    int sum = 0;

    for (int j = 0; j < 26; j++) {
      letras[j] = 0;
    }
    for (int k = 0; k < p1.size(); k++) {
      if (p1[k] >= 97 && p1[k] <= 122) {
        letras[p1[k] - 'a'] = 1;
      }
    }

    for (int k = 0; k < 26; k++) {
      if (letras[k] == 1) {
        sum++;
      }
    }

    if (sum == 26) {
      cout << "frase completa" << endl;
    } else if (sum >= 13 && sum < 26) {
      cout << "frase quase completa" << endl;
    } else if (sum < 13) {
      cout << "frase mal elaborada" << endl;
    }
    i++;
  }
}