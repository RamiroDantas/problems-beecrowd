#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
  int n;
  string word;
  cin >> n;
  
  int i = 0;
  cin.ignore();
  while(i < n){
    getline(cin, word);
    
    for(int j = 0; j < word.size(); j++){
      if(word[j] >= 65 && word[j] <= 90 || word[j] >= 97 && word[j] <= 122){
          word[j] += 3;
      }
    }

    for(int j = 0, t = word.size()-1; j < (word.size()/2); j++, t--){
      char a = word[j];
      word[j] = word[t];
      word[t] = a;
    }

    for(int j = (word.size()/2); j < word.size(); j++){
      word[j] -= 1;
    }
    
    cout << word << endl;
    i++;
  }
  
}