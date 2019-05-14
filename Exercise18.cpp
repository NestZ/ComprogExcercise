#include<bits/stdc++.h>
using namespace std;

struct Rect{
  double x,y,w,h;
};

Rect merge(Rect &a,Rect &b){
  Rect ans;
  ans.w = max(a.x + a.w,b.x +b.w) - min(a.x,b.x);
  ans.h = max(a.y,b.y) - min(a.y - a.h,b.y - b.h);
  ans.x = min(a.x,b.x);
  ans.y = max(a.y,b.y);
  return ans;
}

int main(){
  Rect R1,R2,R3;
  cout << "Please input Rect 1 (x y w h): ";
  cin >> R1.x >> R1.y >> R1.w >> R1.h;
  cout << "Please input Rect 2 (x y w h): ";
  cin >> R2.x >> R2.y >> R2.w >> R2.h;
  R3 = merge(R1,R2);
  cout << "Merged Rect = ";
  cout << R3.x << " " << R3.y << " " << R3.w << " " << R3.h << " ";

  return 0;
}
