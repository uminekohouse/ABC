#include<bits/stdc++.h>
using namespace std;

using ll = long long;

int main(){
  int N; cin >> N;
  ll mod = 998244353;
  vector<ll> A(N+1, 0), B(N+1, 0);
  for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = 1; i <= N; ++i) cin >> B[i];


  vector<vector<ll>> dp(N+1, vector<ll>(3009, 0));
  dp[0][0] = 1;
  for(int i = 1; i <= N; ++i){
    ll S = 0;
    for(int j = 0; j < A[i]; ++j) S = (S+dp[i-1][j])%mod;
    for(int j = A[i]; j <= B[i]; ++j){
      S = (S+dp[i-1][j])%mod;
      dp[i][j] = S;
    }
  }
  ll ans = 0;
  for(int i = A[N]; i <= B[N]; ++i) ans = (ans+dp[N][i])%mod;
  cout << ans << endl;
}


