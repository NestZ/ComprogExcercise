#include<iostream>
#include<iomanip>
#include<ctime>
using namespace std;

void randomMatrix(double arr[][10]){
  for(int i = 0;i < 10;i++){
    for(int j = 0;j < 10;j++){
      arr[i][j] = rand() % 9999 + 1;
      arr[i][j] /= 1000.0;
    }
  }
}

int main(){
  srand(time(0));
  double arr[10][10];

  randomMatrix(arr);

  for(int i = 0;i < 10;i++){
    for(int j = 0;j < 10;j++){
      cout << fixed << setprecision(3) << arr[i][j] << " ";
    }
    cout << "\n";
  }

  return 0;
}
