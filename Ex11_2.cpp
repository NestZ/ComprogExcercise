#include <iostream>
using namespace std;

int fibonacci(int n){
  int sum1 = 0;
  int sum2 = 1;
  int ans;
  if(n < 2)return n;
  else{
    for(int i = 0;i < n-1;i++){
      ans = sum1 + sum2;
      sum1 = sum2;
      sum2 = ans;
    }
    return ans;
  }
}

int main() {
  cout << fibonacci(30);

  return 0;
}
