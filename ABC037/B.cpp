#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> res;
  res.push_back(A[0]);
  for (int i = 1; i < N; ++i) {
    if (abs(A[i] - A[i - 1]) == 1) {
      res.push_back(A[i]);
      continue;
    }
    if (A[i - 1] < A[i]) {
      for (int j = A[i - 1] + 1; j <= A[i]; ++j)
        res.push_back(j);
      continue;
    } else {
      for (int j = A[i - 1] - 1; j >= A[i]; --j)
        res.push_back(j);
      continue;
    }
  }
  for (auto v : res)
    cout << v << endl;
}
