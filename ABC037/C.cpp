#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<ll> A(N);
  for (int i = 0; i < N; ++i)
    cin >> A[i];
  A.insert(A.begin(), 0);
  for (int i = 1; i <= N; ++i)
    A[i] += A[i - 1];
  ll ans = 0;
  for (int i = K; i <= N; ++i)
    ans += A[i] - A[i - K];
  cout << ans << endl;
}
