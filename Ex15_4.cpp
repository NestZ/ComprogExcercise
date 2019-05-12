#include<bits/stdc++.h>
using namespace std;

void insert(int a,int b,vector<int> &star,int &err){
  int n = star.size();
  bool sameA = false;
  bool sameB = false;
  int indexA;
  int indexB;
  for(int i = 0;i < n;i++){
    if(a == star[i]){
      sameA = true;
      indexA = i;
      break;
    }
  }
  for(int i = 0;i < n;i++){
    if(b == star[i]){
      sameB = true;
      indexB = i;
      break;
    }
  }
  if(sameB && !sameA)star.push_back(a);
  else if(sameA && !sameB)star.push_back(b);
}

bool checkSame(int a,int b,vector<int> &set){
  int n = set.size();
  for(int i = 0;i < n;i++){
    if(a == set[i] || b == set[i]){
      return true;
    }
  }
  return false;
}

int main(){
  int a = 1;
  int b = 1;
  int it = 0;
  int err = 0;
  int index = 0;
  int indexSame;
  vector<vector<int>> star;
  while(a > 0 && b > 0){
    cin >> a >> b;
    if(a <= 0 && b <= 0)break;
    if(it == 0){
      star.resize(1);
      if(a == b)star[it].push_back(a);
      else{
        star[it].push_back(a);
        star[it].push_back(b);
      }
      it++;
    }
    else{
      for(int i = 0;i < star.size();i++){
        if(checkSame(a,b,star[i])){
          index++;
          indexSame = i;
          if(index == 2)err -= 1;
          else if(i == star.size() - 1){
            insert(a,b,star[i],err);
          }
        }
        else if(i == star.size() - 1){
          if(index == 1){
            insert(a,b,star[indexSame],err);
            break;
          }
          star.resize(star.size() + 1);
          star[star.size() - 1].push_back(a);
          star[star.size() - 1].push_back(b);
          break;
        }
      }
      index = 0;
    }
  }
  cout << star.size() + err;

  return 0;
}
