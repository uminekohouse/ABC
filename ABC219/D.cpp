#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, X, Y; cin >> N >> X >> Y;
  vector<int> A(N+1, 0), B(N+1, 0);
  for(int i = 1; i <= N; ++i) cin >> A[i] >> B[i];
  
  int MAX = 400; 
  vector<vector<vector<int>>> dp(N+1, vector<vector<int>> (301, vector<int>(301, MAX)));
  dp[0][0][0] = 0;
  for(int i = 0; i < N; ++i){
    for(int j = 0; j <= 300; ++j){
      for(int k = 0; k <= 300; ++k){
        int a = min(j+A[i+1], 300);
        int b = min(k+B[i+1], 300);
        dp[i+1][a][b] = min(dp[i+1][a][b], dp[i][j][k]+1);
        dp[i+1][j][k] = min(dp[i+1][j][k], dp[i][j][k]);
      }
    }
  }
  int ans = MAX;
  for(int i = X; i <= 300; ++i){
    for(int j = Y; j <= 300; ++j){
      ans = min(ans, dp[N][i][j]);
    }
  }
  if(ans==MAX) cout << -1 << endl;
  else cout << ans << endl;
}
        

