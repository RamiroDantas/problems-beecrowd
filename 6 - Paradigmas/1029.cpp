#include <iostream>
using namespace std;
int sum = 0, lacos = 0;

void fib(int num){
  lacos++;
  if(num == 1) {
    sum += 1;
    return;
  }
  if(num == 0) return;

  fib(num - 1);
  fib(num - 2);
}  

int main() {
  int n, x;

  cin >> n;

  int i = 0;

  while(i < n){
    cin >> x;  
    fib(x - 1);
    fib(x - 2);

    cout << "fib(" << x << ") = " << lacos << " calls = " << sum << endl;

     sum = 0, lacos = 0;
    i++;
  }
}