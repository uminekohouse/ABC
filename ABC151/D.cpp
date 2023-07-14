#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

vector<int> dx = {0, -1, 0, 1};
vector<int> dy = {-1, 0, 1, 0};

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> field(H);
  for (int i = 0; i < H; ++i)
    cin >> field[i];
  int ans = 0;
  for (int i = 0; i < H; ++i) {
    for (int j = 0; j < W; ++j) {
      if (field[i][j] != '.')
        continue;
      vector<vector<int>> seen(H, vector<int>(W, -1));
      seen[i][j] = 0;
      queue<pair<int, int>> que;
      que.push({i, j});
      while (!que.empty()) {
        auto v = que.front();
        que.pop();
        int x = v.first, y = v.second;
        for (int k = 0; k < 4; ++k) {
          int nx = x + dx[k], ny = y + dy[k];
          if (nx < 0 || nx >= H || ny < 0 || ny >= W)
            continue;
          if (field[nx][ny] != '.')
            continue;
          if (seen[nx][ny] != -1)
            continue;
          seen[nx][ny] = seen[x][y] + 1;
          que.push({nx, ny});
        }
      }
      for (int k = 0; k < H; ++k) {
        for (int l = 0; l < W; ++l) {
          ans = max(seen[k][l], ans);
        }
      }
    }
  }
  cout << ans << endl;
}
