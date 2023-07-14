#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int K, N;
  cin >> K >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  vector<int> diff;
  rep(i, N - 1) diff.push_back(A[i + 1] - A[i]);
  diff.push_back(A[0] + K - A[N - 1]);
  sort(all(diff));
  cout << K - diff[diff.size() - 1] << endl;
}
