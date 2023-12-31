#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  sort(S.begin(), S.end());

  do {
    bool ok = true;
    rep(i, N - 1) {
      int diff = 0;
      rep(j, M) if (S[i][j] != S[i + 1][j]) diff++;
      if (diff != 1)
        ok = false;
    }

    if (ok) {
      cout << "Yes" << endl;
      return 0;
    }
  } while (next_permutation(S.begin(), S.end()));
  cout << "No" << endl;
}
