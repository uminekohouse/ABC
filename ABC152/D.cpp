#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  vector<vector<int>> table(10, vector<int>(10, 0));
  for (int i = 1; i <= N; ++i) {
    string S = to_string(i);
    int bot = S[0] - '0';
    int top = S[S.size() - 1] - '0';
    table[top][bot]++;
  }
  int ans = 0;
  for (int i = 1; i < 10; i++)
    for (int j = 1; j < 10; ++j) {
      ans += table[i][j] * table[j][i];
    }
  cout << ans << endl;
}
