#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  ll A[N + 1];
  rep(i, N) cin >> A[i + 1];
  rep(i, N) A[i + 1] -= i + 1;
  sort(A + 1, A + N + 1);
  ll medium = A[(N + 1) / 2];
  ll sum = 0;
  rep(i, N) sum += abs(A[i + 1] - medium);
  cout << sum << endl;
}
