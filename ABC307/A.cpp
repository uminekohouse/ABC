#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> A(7 * N);
  rep(i, 7 * N) cin >> A[i];
  int sum = 0;
  for (int i = 0; i < 7 * N; ++i) {
    if (i % 7 == 0 && i) {
      cout << sum << endl;
      sum = 0;
    }
    sum += A[i];
  }
  cout << sum << endl;
}
