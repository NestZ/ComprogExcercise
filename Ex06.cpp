#include<iostream>
using namespace std;

int StringChecker(string s){
  int i,nY = 0,nX = 0;
  for(i=0;i < s.size();i++){
    if(s[i] == 'X')nX += 1;
    else if(s[i] == 'Y')nY += 1;
  }
  if(nX > nY)return 1;
  else if(nY > nX)return -1;
  else return 0;
}

int main(){
  cout << StringChecker("XYXXYX") << "\n";
  cout << StringChecker("XXYY") << "\n";
  cout << StringChecker("XYYYYY") << "\n";
  cout << StringChecker("XYXY") << "\n";
  cout << StringChecker("XXXXXYYYY") << "\n";
  cout << StringChecker("Y");

  return 0;
}
