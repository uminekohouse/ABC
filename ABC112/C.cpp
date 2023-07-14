#include<bits/stdc++.h>
#include<iostream>
using namespace std;
using LL = long long;
using P = pair<int,int>;
using Graph = vector<vector<int>>;
const long long LINF = 1LL << 60;
#define all(x) (x).begin(), (x).end()
#define rep(i,n) for(int i = 0; i < (n); ++i)
template<class T>void chmin(T&a, T b){if(a > b) a = b;}
template<class T>void chmax(T&a, T b){if(a < b) a = b;}

int main(){
	int N; cin >> N;
	vector<int> x(N), y(N), h(N);
  for(int i = 0; i < N; ++i) cin >> x[i] >> y[i] >> h[i];

  int resX, resY, resH;
  
  for(int c_x = 0; c_x <= 100; ++c_x){
    for(int c_y = 0; c_y <= 100; ++c_y){
      set<int> Hset;
      int tmp_H;
      for(int i = 0; i < N; ++i){
          tmp_H = h[i] + abs(c_x - x[i]) + abs(c_y - y[i]);
          Hset.insert(tmp_H);
      }
      if(Hset.size()==1){
        resX = c_x; resY = c_y; resH = tmp_H;
        break;
      }
    }
  }
  cout << resX << " " << resY << " " << resH << endl;
}
