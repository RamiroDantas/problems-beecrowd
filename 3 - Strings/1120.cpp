#include <string>
#include <iostream>
using namespace std;

int main() {
  string word;
  char n;
  while(true){
    cin >> n;
    cin.ignore();
    getline(cin, word);
    
    if(n == '0' && word[0] == '0'){
      break;
    }
    int d = 0, t = 0, k = 0, tam = word.size();
    for(int i = 0; i < word.size(); i++){
      if(word[i] == n){
        for(int j = i; j < word.size(); j++){
          if(word[j] == n){
            d++;
            k++;
          } else{
            break;
          }
        }
        word.erase(i, k);
        k = 0;
      } else if(word[i] == '0'){
        t++;
      }
      
    }
    string wordPrint;
    
    if(d == tam || d + t == tam){
      wordPrint = '0';
    } else {
      if(word[0] == '0'){
        int b = 0;
        for(int d = 0; d < word.size(); d++){
          if(word[d] == '0'){
            if(d+1 == word.size()){
              break;
            }
            b++;
          } else {
            break;
          }
        }
        word.erase(0, b);
      }
      wordPrint = word;
    }
    cout << wordPrint << '\n';
  }
}