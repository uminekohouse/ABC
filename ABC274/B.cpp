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

int H, W;
int cnt[1009];
int main(){
  cin >> H >> W;
  vector<string> S(H);
  for(int i = 0; i < H; ++i) cin >> S[i];
  for(int i = 0; i < W; ++i){
    int check = 0;
    for(int j = 0; j < H; ++j){
      if(S[j][i] == '#') check++;
    }
    cnt[i] = check;
  }
  for(int i = 0; i < W; ++i){
    if(i) cout << " ";
    cout << cnt[i];
  }
  cout << endl;
}    






