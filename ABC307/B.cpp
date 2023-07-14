#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  rep(i, N) cin >> S[i];
  bool ok = false;
  for (int i = 0; i < N; ++i) {
    for (int j = 0; j < N; ++j) {
      if (i == j)
        continue;
      string T, U;
      T = U = S[i] + S[j];
      reverse(T.begin(), T.end());
      if (U == T)
        ok = true;
    }
  }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
