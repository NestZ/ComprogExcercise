#include<iostream>
#include<cmath>
using namespace std;

double Determinant(double [][10],int);

int main(){
  int n;

  cout << "Please input matrix size : ";
  cin >> n;

  double matrix[n][10];

  for(int i = 0;i < n;i++){
    cout << "Input element of row " << i+1 << ": ";
    for(int j = 0;j < n;j++)cin >> matrix[i][j];
  }

  cout << "Determinant of your matrix is " << Determinant(matrix,n);

  return 0;
}

double Determinant(double matrix[][10],int dimension){
  double det = 0 ;

  if(dimension == 1)return matrix[0][0];
  else if(dimension > 1){

    int newDimension = dimension - 1;
    double newMat[newDimension][10] = {0};
    int index[newDimension] = {0};
    int m;

    for(int i = dimension;i > 0;i--){
      //creat new matrix
      for(int j = 0;j < newDimension;j++){
        m = 0;
        for(int k = 0;k < dimension;k++){
          if(k != i-1){
            newMat[j][m] = matrix[j+1][k];
            m++;
          }
        }
      }
      //plus the answer
      det += Determinant(newMat,newDimension) * matrix[0][i-1] * pow(-1,i-1);
    }

    return det;
  }
}
