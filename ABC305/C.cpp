#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  rep(i, H) cin >> S[i];

  vector<int> cnt_col(W, 0);
  vector<int> cnt_row(H, 0);
  for (int i = 0; i < H; ++i) {
    int cnt = 0;
    for (int j = 0; j < W; ++j) {
      if (S[i][j] == '#')
        cnt++;
    }
    cnt_row[i] = cnt;
  }
  for (int j = 0; j < W; ++j) {
    int cnt = 0;
    for (int i = 0; i < H; ++i) {
      if (S[i][j] == '#')
        cnt++;
    }
    cnt_col[j] = cnt;
  }
  int row_max = *max_element(cnt_row.begin(), cnt_row.end());
  int col_max = *max_element(cnt_col.begin(), cnt_col.end());
  for (int i = 0; i < H; ++i) {
    if (cnt_row[i] != 0 && cnt_row[i] != row_max)
      cout << i + 1 << endl;
  }
  for (int i = 0; i < W; ++i) {
    if (cnt_col[i] != 0 && cnt_col[i] != col_max)
      cout << i + 1 << endl;
  }
}
