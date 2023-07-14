#include<bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int N, X; cin >> N >> X;
  vector<int> coins;
  for(int i = 0; i < N; ++i){
    int A, B; cin >> A >> B;
    for(int j = 0; j < B; ++j){
     coins.push_back(A);
    }
  }
  int S = coins.size();
  vector<vector<bool>> dp(S+1, vector<bool>(X+1, 0));
  dp[0][0] = true;
  for(int i = 0; i < S; ++i){
    for(int j = 0; j <= X; ++j){
      if(!dp[i][j]) continue;
      dp[i+1][j] = true;
      if(j+coins[i]<=X) dp[i+1][j+coins[i]] = true;
    }
  }
  if(dp[S][X]) cout << "Yes" << endl;
  else cout << "No" << endl; 


} 
