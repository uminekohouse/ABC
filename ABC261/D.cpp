#include<bits/stdc++.h>
using namespace std;
using ll = long long;
const  ll LINF = 1LL<<60;


ll M, N, X[5009];
int main(){
  cin >> N >> M;
  for(int i = 1; i <= N; ++i) cin >> X[i];
  map<ll, ll> mp;
  for(int i = 1; i <= M; ++i){
    ll C, Y; cin >> C >> Y;
    mp[C] = Y;
  }

  vector<vector<ll>> dp(N+1, vector<ll>(N+1, -LINF));
  dp[0][0] = 0;
  for(int i = 1; i <= N; ++i){
    for(int j = 0; j <= i; ++j){
      dp[i][0] = max(dp[i][0], dp[i-1][j]);
      if(j>0) dp[i][j] = max(dp[i][j], dp[i-1][j-1]+X[i]+mp[j]); 
    }
  }
  ll ans = 0;
  for(auto p : dp[N]) ans = max(ans, p);
  cout << ans << endl;
}



