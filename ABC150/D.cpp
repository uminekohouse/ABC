#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N), B(N);
  rep(i, N) cin >> A[i];
  rep(i, N) B[i] = A[i] / 2;
  int lcm_num = 1;
  rep(i, N) {
    lcm_num = lcm(lcm_num, B[i]);
    if (lcm_num > M)
      lcm_num = 0;
  }
  bool flag = true;
  rep(i, N) if ((lcm_num / B[i]) % 2 == 0) flag = false;
  if (!flag) {
    cout << 0 << endl;
    return 0;
  }
  int ans = 0;
  int now = lcm_num;
  while (now <= M) {
    ans++;
    now += lcm_num * 2;
  }
  cout << ans << endl;
}
