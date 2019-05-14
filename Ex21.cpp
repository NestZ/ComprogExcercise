#include<bits/stdc++.h>
using namespace std;

class Monster{
  public:
    int hp;
    int atk;
    int def;
    vector<string> skills;
    Monster(double,double,double,vector<string>);
    Monster operator+(Monster);
};

Monster::Monster(double h,double a,double d,vector<string> s){
  hp = h;
  atk = a;
  def = d;
  skills = s;
}

Monster Monster::operator+(Monster a){
  vector<string> skill;
  vector<string> mySkill = this->skills;
  int skillIndex;
  for(int i = 0;i < 4;i++){
    if(rand() % 2){
      do{
        skillIndex = rand() % mySkill.size();
      }while(mySkill[skillIndex] == "0");
      skill.push_back(mySkill[skillIndex]);
      mySkill[skillIndex] = "0";
      if(skillIndex == 0)a.skills[skillIndex] = "0";
    }
    else{
      do{
        skillIndex = rand() % a.skills.size();
      }while(a.skills[skillIndex] == "0");
      skill.push_back(a.skills[skillIndex]);
      a.skills[skillIndex] = "0";
      if(skillIndex == 0)mySkill[skillIndex] = "0";
    }
  }
  Monster ans(0,0,0,skill);
  ans.hp = rand() % a.hp + this->hp + 1;
  ans.atk = rand() % a.atk + this->atk + 1;
  ans.def = rand() % a.def + this->def + 1;

  return ans;
}

int main(){
  srand(time(0));
  vector<string> Pikachu_skills;
  Pikachu_skills.push_back("Tail Whip");
  Pikachu_skills.push_back("Spark");
  Pikachu_skills.push_back("Thunder");
  Monster Pikachu(100,40,20,Pikachu_skills);

  vector<string> Nidoran_skills;
  Nidoran_skills.push_back("Tail Whip");
  Nidoran_skills.push_back("Double Kick");
  Nidoran_skills.push_back("Toxic Spikes");
  Nidoran_skills.push_back("Poison Fang");
  Monster Nidoran(200,25,50,Nidoran_skills);

  Monster Nidochu = Nidoran + Pikachu;

  cout << "HP = " << Nidochu.hp;
  cout << "\t ATK = " << Nidochu.atk;
  cout << "\t DEF = " << Nidochu.def << "\n";
  cout << "SKILLS: \n";
  for(int i = 0; i < Nidochu.skills.size();i++){
    cout << "\t" << Nidochu.skills[i] << "\n";
  }
  return 0;
}
