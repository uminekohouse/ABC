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
  vector<int> h(3), w(3);
  for(int i = 0; i < 3; ++i) cin >> h[i];
  for(int i = 0; i < 3; ++i) cin >> w[i];
  vector<vector<int>> block(3, vector<int>(3));
  int ans = 0;

  for(int i = 1; i <= min(h[0],w[0])-2; ++i){
    for(int j = 1; j <= min(h[0]-i-1, w[1]-2); ++j){
      for(int k = 1; k <= min(w[0]-i-1, h[1]-2); ++k){
        for(int l = 1; l <= min(h[1]-k-1, w[1]-j-1); ++l){
          int m = h[0] - i - j; 
          int n = w[0] - i - k; 
          int o = h[1] - k - l; 
          int p = w[1] - j - l; 
          if(w[2]-m-o==h[2]-n-p&&(w[2]-m-o) > 0) ans++;
        }
      }
    }
  }
  cout << ans << endl;
}



