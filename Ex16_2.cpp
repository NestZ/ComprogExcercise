#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<float> num;
  string temp;
  ifstream fin("score2.txt");
  while(getline(fin,temp)){
    num.push_back(stof(temp));
  }

  return 0;
}
