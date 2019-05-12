#include<iostream>
#include<iomanip>
using namespace std;

int N;
int M;
bool pathCheck[100][100];

void movePath(int &,int &);

int main(){
  int num = 1;
  int nowPosN = 0;
  int nowPosM = 0;
  cout << "N , M : ";
  cin >> N >> M;
  int path[N][M];
  for(int i = 0;i < N;i++){
    for(int j = 0;j < M;j++){
      pathCheck[i][j] = false;
      path[i][j] = 0;
    }
  }
  cout << "Reading sequence is :\n";
  path[nowPosN][nowPosM] = num;
  num++;
  for(int i = 2;i < (N*M) + 1;i++){
    movePath(nowPosN,nowPosM);
    path[nowPosN][nowPosM] = i;
    pathCheck[nowPosN][nowPosM] = true;
  }
  for(int i = 0;i < N;i++){
    for(int j = 0;j < M;j++){
      cout << setw(3) << path[i][j] << " ";
    }
    cout << "\n";
  }
  return 0;
}

void movePath(int &nowPosN,int &nowPosM){
  if(nowPosM == 0 && nowPosN == 0){
    nowPosM++;
    return;
  }
  if(nowPosN == 0){
    if(nowPosM != M - 1){
      if(pathCheck[nowPosN+1][nowPosM-1] == true){
        nowPosM++;
        return;
      }
      else if(pathCheck[nowPosN+1][nowPosM-1] == false){
        nowPosN++;
        nowPosM--;
        return;
      }
    }
    else if(nowPosM == M - 1){
      if(pathCheck[nowPosN + 1][nowPosM - 1] == true){
        nowPosN++;
        return;
      }
      else if(pathCheck[nowPosN + 1][nowPosM - 1] == false){
        nowPosN++;
        nowPosM--;
        return;
      }
    }
  }
  else if(nowPosM == M - 1){
    if(pathCheck[nowPosN + 1][nowPosM - 1] == true){
      nowPosN++;
      return;
    }
    else if(pathCheck[nowPosN + 1][nowPosM - 1] == false){
      nowPosN++;
      nowPosM--;
      return;
    }
  }
  else if(nowPosM == 0){
    if(nowPosN != N - 1){
      if(pathCheck[nowPosN-1][nowPosM+1] == true){
        nowPosN++;
        return;
      }
      else if(pathCheck[nowPosN-1][nowPosM+1] == false){
        nowPosN--;
        nowPosM++;
        return;
      }
    }
    else if(nowPosN == N - 1){
      if(pathCheck[nowPosN - 1][nowPosM + 1] == true){
        nowPosM++;
        return;
      }
      else if(pathCheck[nowPosN - 1][nowPosM + 1] == false){
        nowPosN--;
        nowPosM++;
        return;
      }
    }
  }
  else if(nowPosN == N - 1){
    if(pathCheck[nowPosN - 1][nowPosM + 1] == true){
      nowPosM++;
      return;
    }
    else if(pathCheck[nowPosN - 1][nowPosM + 1] == false){
      nowPosN--;
      nowPosM++;
      return;
    }
  }
  if(pathCheck[nowPosN-1][nowPosM+1] == false){
    nowPosN--;
    nowPosM++;
  }
  else if(pathCheck[nowPosN-1][nowPosM+1] == true){
    nowPosN++;
    nowPosM--;
  }
}
