#include<bits/stdc++.h>
using namespace std;

int main(){
  int N, K; cin >> N >> K;
  vector<int> A(N+1), B(N+1);
  for(int i = 1; i <= N; ++i) cin >> A[i];
  for(int i = 1; i <= N; ++i) cin >> B[i];
  vector<vector<bool>> dp(N+1, vector<bool>(2, false));
  dp[1][0] = true; dp[1][1] = true;
  for(int i = 2; i <= N; ++i){
    if(dp[i-1][0]){
      if(abs(A[i-1]-A[i])<=K) dp[i][0] = true;
      if(abs(A[i-1]-B[i])<=K) dp[i][1] = true;
    }
    if(dp[i-1][1]){
      if(abs(B[i-1]-A[i])<=K) dp[i][0] = true;
      if(abs(B[i-1]-B[i])<=K) dp[i][1] = true;
    }
  }
  if(dp[N][0]||dp[N][1]) cout << "Yes" << endl;
  else cout << "No" << endl;
}

