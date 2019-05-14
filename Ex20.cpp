#include<bits/stdc++.h>
using namespace std;

class People{
  string name;
  vector<People *> parents;
  vector<People *> children;
  public:
    People(string);
    ~People();
    void setParent(People *);
    void setChild(People *);
    void removeChild(People *);
    string getName();
    void showParents();
    void showChildren();
};

People::People(string s){
  name = s;
}

People::~People(){
  cout << name << " was deleted.\n";
  for(int i = 0;i < parents.size();i++){
    parents[i]->removeChild(this);
  }
  for(int i = 0;i < children.size();i++){
    for(int j = 0;j < children[i]->parents.size();j++){
      if(children[i]->parents[j] == this)parents.erase(parents.begin()+j);
    }
  }
}

void People::setParent(People *p){
  for(int i=0;i < parents.size(); i++){
    if(parents[i] == p) return;
  }
  parents.push_back(p);
  p->setChild(this);
}

void People::setChild(People *p){
  for(int i=0;i < children.size(); i++){
    if(children[i] == p) return;
  }
  children.push_back(p);
  p->setParent(this);
}

void People::removeChild(People *p){
  for(int i=0;i < children.size(); i++){
    if(children[i] == p) children.erase(children.begin()+i);
  }
}

string People::getName(){
  return name;
}

void People::showParents(){
  cout << name << "'s parents: ";
  for(int i=0;i < parents.size(); i++){
    cout << parents[i]->getName() << " ";
  }
  cout << "\n";
}

void People::showChildren(){
  cout << name << "'s children: ";
  for(int i=0;i < children.size(); i++){
    cout << children[i]->getName() << " ";
  }
  cout << "\n";
}

int main(){
  People *A = new People("Alice");
  People *B = new People("Bob");
  People *C = new People("Charlie");
  People *D = new People("David");
  People *E = new People("Eve");
  People *F = new People("Frank");
  People *G = new People("Grace");
  People *H = new People("Heidi");

  C->setParent(A);
  C->setParent(B);
  E->setParent(A);
  E->setParent(B);
  D->setParent(A);
  D->setParent(B);
  F->setParent(D);
  F->setParent(G);
  H->setParent(D);
  H->setParent(G);

  return 0;
}
