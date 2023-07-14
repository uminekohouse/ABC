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
  vector<vector<long long>> a(N, vector<long long>(N));
  for(int i = 0; i < N; ++i) for(int j = 0; j < N; ++j) cin >> a[i][j];


  vector<vector<map<long long, long long>>>
    dp(N, vector<map<LL, LL>> (N, map<LL, LL>()));
  dp[0][0][a[0][0]]++;
  for(int i = 0; i < N; ++i){
    for(int j = 0; j < N; ++j){
      if(i!=N-1) for(auto p : dp[i][j])
        dp[i+1][j][p.first ^ a[i+1][j]] += p.second;
      if(j!=N-1) for(auto p : dp[i][j])
        dp[i][j+1][p.first ^ a[i][j+1]] += p.second;
    }
  }
  cout << dp[N-1][N-1][0] << endl;

}
