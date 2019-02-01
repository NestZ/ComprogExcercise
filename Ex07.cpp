#include<iostream>
using namespace std;

int main(){
  char score;

  cout << "Enter your score : ";
  cin >> score;

  switch(score){
    case 'A':
      cout << "Awesome";
      break;
    case 'B':
      cout << "Great";
      break;
    case 'C':
      cout << "Good";
      break;
    case 'F':
      cout << "Noob";
      break;
    defualt:
      cout << "Error: Invalid Input";
    }

    return 0;
}
