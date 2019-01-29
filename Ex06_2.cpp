#include<iostream>
using namespace std;

char VowelChecker(char c){
  int i;
  char Vowels[10] = {'A','E','I','O','U','a','e','i','o','u'};
  for(i=0;i<10;i++){
    if(c == Vowels[i]){
      return 'y';
    }
    else if(c != Vowels[i] && i == 9)return 'n';
  }
}

int main(){
  cout << VowelChecker('A') << "\n";
  cout << VowelChecker('a') << "\n";
  cout << VowelChecker('B') << "\n";
  cout << VowelChecker('z') << "\n";
  cout << VowelChecker('6') << "\n";
  cout << VowelChecker('U') << "\n";
  cout << VowelChecker('i');
}
