#include<iostream>
#include<cmath>
using namespace std;

int recursion1(int n){
  int sum;
  if(n == 1)return 2;
  else sum += pow(2,n) + recursion1(n - 1);
  return sum;
}

double recursion2(double n){
  if(n == 1)return 1;
  else return sqrt(n*recursion2(n - 1));
}

double recursion3(double n){
  if(n == 0)return 1;
  else return 1+(n/recursion3(n - 1));
}

int main(){
  cout << recursion1(3) << "\n";
  cout << recursion2(3) << "\n";
  cout << recursion3(3);

  return 0;
}
