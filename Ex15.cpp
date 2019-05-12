#include <iostream>
using namespace std;

int sumNonZero(int *,int **,int **);

int main(){
  int A[] = {0,0,0,0,0,1,3,2,1,1,0,0,0,1,6,9,0,0,0,1,1,0,0};
  int sum;
  int *start,*end;

  sum =  sumNonZero(A,&start,&end);

  cout << "Sum = " << sum << "\n";
  cout << "Start = " << start << "\n" ;
  cout << "End = " << end << "\n";
  cout << "Length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

  sum =  sumNonZero(end+1,&start,&end);

  cout << "Sum = " << sum << "\n";
  cout << "Start = " << start << "\n" ;
  cout << "End = " << end << "\n";
  cout << "Length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

  sum =  sumNonZero(end+1,&start,&end);

  cout << "Sum = " << sum << "\n";
  cout << "Start = " << start << "\n" ;
  cout << "End = " << end << "\n";
  cout << "Length = " << end-start+1 << "\n";
  cout <<"--------------------------------------\n";

  return 0;
}

int sumNonZero(int *arr,int **start,int **end){
  int sum = 0;
  while(*arr == 0){
    arr++;
  }
  *start = arr;
  while(*arr != 0){
    sum += *arr;
    arr++;
  }
  arr--;
  *end = arr;

  return sum;
}
