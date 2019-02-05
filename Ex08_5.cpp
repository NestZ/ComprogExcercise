#include<iostream>
using namespace std;

void printPattern2(int x){
  int i,j;
  
  if(x <= 0)cout << "Invalid input";
  else{
    for(i=0;i<x;i++){
      for(j=0;j<x;j++){
        if(j <= i)cout << "o";
        else cout << "x";
      }
      cout << "\n";
    }
  }
}

int main(){
  printPattern2(3);
  cout << "\n";

  printPattern2(4);
  cout << "\n";

  printPattern2(5);
  cout << "\n";

  printPattern2(0);
  cout << "\n";

  printPattern2(-1);
  cout << "\n";

  return 0;
}
