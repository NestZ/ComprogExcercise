#include<iostream>
using namespace std;

int main(){
  int input = 1,min = 0;
  bool start = false;

  while(input > 0){
    cout << "Input number : ";
    cin >> input;
    if(!start){
      if(input<=0){
        cout << "N/A";
        break;
      }
      else min = input;
    }
    else if(input < min && input != 0)min = input;
    start = true;
  }
  if(min != 0)cout << "Minimum = " << min << "\n";

  return 0;
}
