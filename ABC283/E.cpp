#include<bits/stdc++.h>
using namespace std;
#include <atcoder/all>
using namespace atcoder;
using mint = modint998244353;

int main(){
  int N, P; cin >> N >> P;
  int Q = 100-P;
  vector<mint> dp(N+1, 0);
  dp[N] = 1;
  for(int i = N; i > 0; ++i){
    if(i!=1){
      dp[i-1] += dp[i]*Q.inv();
      dp[i-2] += dp[i]*P.inv();
    }
    else{
      dp[i-1] += dp[i];
    }
  }
  cout << dp[0].val() << endl;




}
