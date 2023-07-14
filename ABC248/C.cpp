#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main(){
  int N, M, K;
  cin >> N >> M >> K;
  vector<vector<mint>> dp(N+1, vector<mint>(K+1, 0));
  for(int i = 1; i <= M; ++i) dp[1][i] = 1;
  for(int i = 2; i <= N; ++i){
    for(int j = 1; j <= K; ++j){
      for(int k = 1; k <= M; ++k){
        if(j+k<=K) dp[i][j+k] += dp[i-1][j];
      }
    }
  }
  mint ans = 0;
  for(int i = 1; i <= K; ++i) ans += dp[N][i];
  cout << ans.val() << endl;

}




