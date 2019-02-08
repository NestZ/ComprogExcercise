#include<iostream>
#include<fstream>
#include<cstdlib>
using namespace std;

int main(){
  string num;
  double rangemax;
  double rangemin;
  int n;

  cout << "Enter range of the scores [min, max] for counting: ";
  cin >> rangemin >> rangemax;

  if(rangemin > rangemax){
    cout << "Invalid input. (max >= min)\n";
    return 0;
  }

  ifstream f1;
  f1.open("score.txt");
  while(getline(f1, num)){
    if(atof(num.c_str()) >= rangemin && atof(num.c_str()) <= rangemax)n++;
  }
  f1.close();

  cout << "The number of students who have scores in this range = " << n;

  return 0;
}
