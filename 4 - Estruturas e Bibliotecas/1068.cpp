#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main() {
  string expression;

  while (getline(cin, expression)) {
    int par = 0, totalP = 0;
    int cont = expression.size();

    for (int i = 0; i < cont; i++) {
      if (expression[i] == '(' || expression[i] == ')') {
        totalP++;
      }
    }

    for(int i = 0; i < cont; i++){
      if(par == 0 && expression[i] == ')')
        break;
      if(expression[i] == '('){
        for(int j = i+1; j < cont; j++){
          if(expression[j] == ')'){
            par++;
            expression[j] = ' ';
            break;
          }
        }
      }
    }

    if (par == 0|| totalP - (2* par) > 0) {
      cout << "incorrect" << endl;
    } else {
      cout << "correct" << endl;
    }
  }
}