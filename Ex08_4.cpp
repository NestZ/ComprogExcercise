#include<iostream>
using namespace std;

void printPattern1(int N,int M){
  int i,j;
  if(N <= 0 || M <= 0)cout << "Invalid input";
  else{
    for(i=1;i<=N;i++){
      for(j=1;j<=M;j++){
        if(j % 2 == 0 && i % 2 == 0)cout << "O";
        else if(j % 2 == 1 && i % 2 == 1)cout << "0";
        else cout << "x";
      }
      cout << "\n";
    }
  }
}

int main(){
  printPattern1(2,2);
  cout << "\n";

  printPattern1(3,5);
  cout << "\n";

  printPattern1(5,3);
  cout << "\n";

  printPattern1(0,3);
  cout << "\n";

  printPattern1(7,-1);
  cout << "\n";

  return 0;
}
