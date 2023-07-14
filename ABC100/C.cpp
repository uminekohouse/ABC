#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int ans = 0;
  for (auto val : A) {
    while (val % 2 == 0) {
      val /= 2;
      ans++;
    }
  }
  cout << ans << endl;
}
