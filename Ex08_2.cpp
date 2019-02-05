#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int sum = 0,i,e = 1;

  for(i=3;i<=333;i+=3){
    if(e % 2 == 0)e = 2;
    else e = 3;
    sum += pow(i,e);
    e++;
  }
  cout << sum;

  return 0;
}
