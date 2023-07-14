#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int ans = 1;
  N -= K;
  K--;
  while (N > 0) {
    N -= K;
    ans++;
  }
  cout << ans << endl;
}
