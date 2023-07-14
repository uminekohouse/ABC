#include<bits/stdc++.h>
using namespace std;
		

int N, M, A[2009];

int main(){
  cin >> N >> M;
  for(int i = 1; i <= N; ++i) cin >> A[i];
  long long LINF = 1LL<<60;
  vector<vector<long long>> dp(N+1, vector<long long>(M+1, -LINF));
  dp[0][0] = 0;
  for(int i = 1; i <= N; ++i){
    for(int j = 0; j <= min(i,M); ++j){
      dp[i][j] = max(dp[i-1][j], dp[i][j]);
      if(j>=1) dp[i][j] = max(dp[i-1][j-1]+A[i]*j, dp[i][j]);
    }
  }
  cout << dp[N][M] << endl;
}
