#include<iostream>
#include<cstdlib>
#include<ctime>
#include<cmath>
using namespace std;

int main(){
  int num[10] = {-5,-4,-3,-2,0,1,2,3,4,5};
  srand(time(0));
  cout << rand() % 100 + 1 << "\n";

  cout << 2 * (rand() % 12 + 1) << "\n";

  cout << num[rand() % 10] << "\n";

  cout << pow(2,rand() % 10 + 1) << "\n";
}
