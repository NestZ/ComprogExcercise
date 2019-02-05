#include<iostream>
#include<iomanip>
using namespace std;

int main(){
  int i;
  double sum = 0;

  for(i=2;i<=222;i+=2){
    sum += 1.0/i;
  }
  cout << setprecision(10) << sum;

  return 0;
}
