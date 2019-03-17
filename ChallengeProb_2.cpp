#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

int main(){
  srand(time(0));
  int N;

  do{
      cin >> N;
  }while(N < 2);

  int n;
  int ans;
  int round = 1;
  for(int i = 0;i < 100;i++){
    n = rand() % round + 1;
    ans = rand() % n + 1;
    cout << ans << "\n";
    if(round < N)round++;
  }

  return 0;
}
