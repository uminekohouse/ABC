#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> A(H), B(H);
  rep(i, H) cin >> A[i];
  rep(i, H) cin >> B[i];

  rep(s, H) {
    rep(t, W) {
      bool flag = true;
      rep(i, H) {
        rep(j, W) {
          if (A[(i + s) % H][(j + t) % W] != B[i][j])
            flag = false;
        }
      }
      if (flag) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
