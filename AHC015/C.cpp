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
  vector<string> field(9);
  for(int i = 0; i < 9; ++i) cin >> field[i];
  int ans = 0;
  for(int i = 0; i < 9; ++i){
    for(int j = 0; j < 9; ++j){
      for(int k = 1; k <= 8; ++k){
        if(i+k>=9||j+k>=9) continue;
        bool check = true;
        if(field[i][j]!='#') check = false;
        if(field[i][j+k]!='#') check = false;
        if(field[i+k][j]!='#') check = false;
        if(field[i+k][j+k]!='#') check = false;

        if(check) ans++;
      }
    }
  }
  //斜め
  for(int i = 0; i < 9; ++i){
    for(int j = 0; j < 9; ++j){
      for(int k = 1; k < 9; ++k){
        for(int l = 1; l < 9; ++l){
          if(i-k<0||j+l+k>=9||i+l>=9) continue;
          bool check = true;
          if(field[i][j]!='#') check = false;
          if(field[i-k][j+l]!='#') check = false;
          if(field[i-k+l][j+k+l]!='#') check = false;
          if(field[i+l][j+k]!='#') check = false;

          if(check) ans++;
        }
      }
    }
  }

  cout << ans << endl;

}
