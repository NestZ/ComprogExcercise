#include <iostream>
using namespace std;

void myfunc(int *,int *);

int main(){
  int a = 4;
  int b = 4;

  myfunc(&a,&b);
  cout << a << " " << b;

  return 0;
}

void myfunc(int *a,int *b){
  int temp = *a;
  *a += *b / 2;
  *b += temp / 2;
}
