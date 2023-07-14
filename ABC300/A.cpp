#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int A, B;
  cin >> A >> B;
  vector<int> C(N);
  rep(i, N) cin >> C[i];
  rep(i, N) {
    if (C[i] == A + B)
      cout << i + 1 << endl;
  }
}
