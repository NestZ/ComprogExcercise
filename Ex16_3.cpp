#include<bits/stdc++.h>
using namespace std;

vector<float> removeNegatives(vector<float> arr){
  vector<float> ans;
  for(int i = 0;i < arr.size();i++){
    if(arr[i] >= 0)ans.push_back(arr[i]);
  }
  return ans;
}

int main(){
  vector<float> num;
  vector<float> noNeg;
  string temp;
  ifstream fin("score2.txt");
  while(getline(fin,temp)){
    num.push_back(stof(temp));
  }
  noNeg = removeNegatives(num);

  return 0;
}
