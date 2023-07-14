#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
  vector<int> x(4), y(4);
  for(int i = 0; i < 4; ++i) cin >> x[i] >> y[i];
  auto check = [](int Px, int Py, int Qx, int Qy){
    int sin_theta = Px*Qy - Py*Qx;
    if(sin_theta < 0) return true;
    else return false;
  };
  bool flag = true;
  for(int i = 0; i < 4; ++i){
    int Px = x[(0+i)%4], Py = y[(0+i)%4];
    int Ox = x[(1+i)%4], Oy = y[(1+i)%4];
    int Qx = x[(2+i)%4], Qy = y[(2+i)%4];
    Px -= Ox; Py -= Oy;
    Qx -= Ox; Qy -= Oy;
    if(!check(Px, Py, Qx, Qy)) flag = false;
  }
  if(flag) cout << "Yes" << endl;
  else cout << "No" << endl;
}





