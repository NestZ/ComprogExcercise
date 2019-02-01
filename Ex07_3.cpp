#include<iostream>
#include<cmath>
using namespace std;

int main(){
  int X,Y;
  double Z;

  cout << "Please Enter X : ";
  cin >> X;
  cout << "Please Enter Y : ";
  cin >> Y;

  if(X >= 20 && Y >= 20 && X+Y >= 50){
    if(Y > X)Y *= 2;
    Z = (X+Y)/2.0;
  }
  else{
    Z = sqrt(X*X + Y*Y);
    if(Z > 50)Z = 50;
  }

  cout << Z;

  return 0;
}
