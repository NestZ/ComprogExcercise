#include<iostream>
using namespace std;

//check if rope burned
bool Check(bool rope[]){
  int i;
  for(i=0;i<100;i++){
    if(rope[i])return true;
  }
  return false;
}

int main(){
  bool rope[100];
  bool start = false;
  int pos[100];
  int i = 0;
  int input;
  int size = 0;
  int location;
  int j;
  int timer = 0;
  int range = 10;

  //init status
  for(i=0;i<100;i++){
    rope[i] = true;
    pos[i] = 0;
  }

  //reset value
  i = 0;

  //input
  while(true){
    cout << "Input the burner location: ";
    cin >> input;

    if(input > 100 || input < 0)break;
    else if(input == 100){
      pos[i] = input;
      break;
    }
    else if(!start || input > pos[i-1]){
      pos[i] = input;
      start = true;
      i++;
    }
    else if(input <= pos[i-1])cout << "The location must be greater than " << pos[i-1] << "\n";
  }

  //reset value
  start = false;
  i = 0;

  //get size
  while(true){
    if(!start && pos[i] == 0 || pos[i] != 0){
      size += 1;
      start = true;
      i++;
    }
    else break;
  }

  //mark position
  for(i=0;i<size;i++){
    rope[pos[i]-1] = false;
  }

  //start burning!!
  while(Check(rope)){
    for(i=0;i<size;i++){
      location = pos[i]-1;
      for(j=-range;j<=range;j++)rope[location+j] = false;
    }
    range += 10;
    timer += 1;
  }

  //print answer
  cout << "Burning complete in " << timer << " sec.";

  return 0;
}
