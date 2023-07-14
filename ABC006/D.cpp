#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];

  vector<vector<int>> dp(N + 1, vector<int>(200));
  dp[0][A[0] % 200] = 1;
  rep(i, N) {
    rep(j, 200) {
      if (!dp[i][j])
        continue;
      dp[i + 1][j] = dp[i][j];
      dp[i + 1][(j + A[i]) % 200] = dp[i][j]++;
    }
  }
  bool ok = false;
  int val = 0;
  rep(i, 200) if (dp[N][i] >= 2) val = i, ok = true;
  if (!ok)
    cout << "No" << endl;

  function<(int, int)> func = [&](int v, int n) {
    if(i==0){
      if(dp[i][v]) vec.push_back(i);
      revrse(vec.begin(), vec.end());
      ans.push_back(vec);
    }
    else{
      if(dp[i][v]

  func(val, N);
