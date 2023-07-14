#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, K, D; cin >> N >> K >> D;
  vector<int> A(N+1, 0); for(int i = 1; i <= N; ++i) cin >> A[i];
  vector<vector<vector<ll>>>
    dp(N+1, vector<vector<ll>>(K+1, vector<ll>(D, 0)));
  
  for(int i = 1; i <= N; ++i){
    for(int w = 1; w <= K; ++w){
      for(int d = 0; d < D; ++d){
        int tmp = d - A[i];
        while(tmp<0) tmp += D;
        dp[i][w][d] = max(dp[i-1][w-1][tmp]+A[i], dp[i][w][d]);
      }

    }
  }
  cout << dp[N][K][0] << endl;
}



