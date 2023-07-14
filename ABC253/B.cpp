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
#ifndef M_PI
#define M_PI 3.14159265358979
#endif
#define deg_to_rad(deg) (((deg)/360)*2*M_PI);
#define rad_to_deg(rad) (((rad)/2/M_PI)*360);

int main(){
  int H, W; cin >> H >> W;
  vector<string> S(H);
  for(int i = 0; i < H; ++i) cin >> S[i];
  vector<int> x, y;
  for(int i = 0; i < H; ++i){
    for(int j = 0; j < W; ++j){
      if(S[i][j]=='o'){
        x.push_back(i);
        y.push_back(j);
      }
    }
  }
  int ans = abs(x[0]-x[1])+abs(y[0]-y[1]);
  cout << ans << endl;
    
}
