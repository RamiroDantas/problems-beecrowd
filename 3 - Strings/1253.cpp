#include <string>
#include <iostream>
using namespace std;

int main() {
  int n;
  cin >> n;
  
  while(n--){
    cin.ignore();
    string word;
    int d;
    getline(cin, word);
    cin >> d;
    
    for(int i = 0; i < word.size(); i++){
      word[i] = word[i] - d;
      if(word[i] < 65){
        word[i] += 26;
      }
    }
    cout << word << '\n';
  }
}