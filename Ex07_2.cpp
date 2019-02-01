#include<iostream>
using namespace std;

int main(){
  int behavior;
  int face;

  cout << "Please Enter Face : ";
  cin >> face;
  cout << "Please Enter Behavior : ";
  cin >> behavior;

  if(face < 50 && behavior < 50)cout << "Unfriend";
  else if(face >= 50 && behavior < 50)cout << "One Night Stand";
  else if(face < 80 && behavior >= 50)cout << "Friend";
  else cout << "Girlfriend";
  
  return 0;
}
