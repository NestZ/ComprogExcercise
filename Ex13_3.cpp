#include<iostream>
using namespace std;

const int N = 3;

void inputMatrix(double [][N]);
void matrixMultiply(const double [][N], const double [][N], double [][N]);
void showMatrix(const double [][N]);

int main(){
  double A[N][N] = {0};
  double B[N][N] = {0};
  double C[N][N] = {0};

  cout << "Input the first matrix.....\n";
  inputMatrix(A);

  cout << "Input the second matrix.....\n";
  inputMatrix(B);

  matrixMultiply(A,B,C);
  cout << "Result is \n";
  showMatrix(C);

  return 0;
}

void inputMatrix(double matrix[][N]){
  for(int i = 0;i < N;i++){
    cout << "Row " << i+1 << " : ";
    for(int j = 0;j < N;j++){
      cin >> matrix[i][j];
    }
  }
}

void matrixMultiply(const double matrix1[][N],const double matrix2[][N],double summat[][N]){
  for(int i = 0;i < N;i++){
    for(int j = 0;j < N;j++){
      for(int k = 0;k < N;k++){
        summat[i][j] += matrix1[i][k] * matrix2[k][j];
      }
    }
  }
}

void showMatrix(const double summat[][N]){
  for(int i = 0;i < N;i++){
    for(int j = 0;j < N;j++){
      cout << summat[i][j] << " ";
    }
    cout << "\n";
  }
}
