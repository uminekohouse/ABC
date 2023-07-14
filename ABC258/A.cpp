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
  int K; cin >> K;
  int res_H, res_M;
  res_H = 21+K/60;
  res_M = K%60;
  if(res_M<10) cout << res_H << ":0" << res_M << endl;
  else cout << res_H << ":" << res_M << endl;
}
