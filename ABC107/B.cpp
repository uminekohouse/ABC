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
  int H, W; cin >> H >> W;
  vector<string> S(H); for(int i = 0; i < H; ++i) cin >> S[i];
  set<int> tate, yoko;
  for(int i = 0; i < H; ++i){
    bool flag = true;
    for(int j = 0; j < W; ++j){
      if(S[i][j] == '#') flag = false;
    }
    if(flag) yoko.insert(i);
  }
  for(int i = 0; i < W; ++i){
    bool flag = true;
    for(int j = 0; j < H; ++j){
      if(S[j][i] == '#') flag = false;
    }
    if(flag) tate.insert(i);
  }
  for(int i = 0; i < H; ++i){
    if(yoko.count(i)) continue;
    for(int j = 0; j < W; ++j){
      if(tate.count(j))continue;
      cout << S[i][j];
    }
    cout << endl;
  }
}
