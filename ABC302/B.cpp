#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

vector<int> dh = {1, 1, 1, 0, 0, 0, -1, -1, -1};
vector<int> dw = {1, 0, -1, 1, 0, -1, 1, 0, -1};

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> A(H);
  rep(i, H) cin >> A[i];
  string T = "snuke";
  rep(i, H) rep(j, W) {
    rep(k, 9) {
      vector<pint> ans;
      rep(l, 5) {
        int h = i + dh[k] * l;
        int w = j + dw[k] * l;
        if (h < 0 || h >= H || w < 0 || w >= W)
          break;
        ;
        if (A[h][w] != T[l])
          break;
        ans.push_back({h + 1, w + 1});
        if (l == 4)
          for (auto val : ans)
            cout << val.first << " " << val.second << endl;
      }
    }
  }
}
