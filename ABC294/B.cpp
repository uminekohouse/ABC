#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

string S = ".ABCDEFGHIJKLMNOPQRSTUVWXYZ";

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  rep(i, H) rep(j, W) cin >> A[i][j];
  rep(i, H) {
    rep(j, W) cout << S[A[i][j]];
    cout << endl;
  }
}
