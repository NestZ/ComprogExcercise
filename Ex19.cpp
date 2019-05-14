#include<bits/stdc++.h>
using namespace std;

class People{
  public:
    char gender;
    int age;
    long long int money;
    double height;
    double weight;
    People * in_relation_with;
    bool flirt(People &);
};

bool People::flirt(People &target){
  if(target.money > 500 && target.height > 50){
    return true;
  }
  return false;
}

int main(){
  People a{'M',19,2000,170,50};
  People b{'F',20,3000,160,50};
  if(a.flirt(b)){
    a.in_relation_with = &b;
    b.in_relation_with = &a;
  }

  return 0;
}
