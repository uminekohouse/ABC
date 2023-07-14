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

int N, M, K;
long long mod = 998244353;

long long func(long long x){
  vector<long long> table(1009, 1);
  table[1] = M;
  for(int i = 2; i < 1009; ++i)
    table[i] = (table[i-1]*table[i-1])%mod;
  long long res = 1;
  for(int i = 1; 1LL<<i <= x; ++i)
    if(x&1LL<<(i-1)) res = (res*table[i-1])%mod;

  return res;
}






int main(){
  cin >> N >> M >> K;
  vector<vector<long long>> dp(K+1, vector<long long>(N+1, 0));
  long long ans = 0;
  dp[0][0] = 1;
  for(int i = 0; i < K; ++i){
    for(int j = 0; j < N; ++j){
      for(int k = 1; k <= M; ++k){
        if(i==0&&j>0) continue; 
        else if(j+k>N) dp[i+1][j+k-N] += dp[i][j];
        else if(j+k==N){
          cout << func(dp[i][j]) << endl;
          ans = (ans+func(dp[i][j]))%mod;
        }
        else dp[i+1][j+k] += dp[i][j];
      }
    }
  }
}
