#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = (n); i < (m); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using Graph = vector<vector<int>>;

ll MOD = 998244353;

int main() {
  string S = "1";
  int head = 0;
  int tail = 0;
  ll ans = 1;
  vector<ll> POW_MOD(600600, 0);
  POW_MOD[0] = 1;
  for (int i = 1; i < 600600; ++i) {
    POW_MOD[i] = POW_MOD[i - 1] * ll(10) % MOD;
    POW_MOD[i] %= MOD;
  }
  int Q;
  cin >> Q;
  REP(_, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int x;
      cin >> x;
      ans *= 10;
      ans += x;
      ans %= MOD;
      S += to_string(x);
      tail++;
    }
    if (c == 2) {
      ll tmp = (S[head] - '0') * POW_MOD[tail - head] % MOD;
      ans = (ans + MOD) - tmp;
      ans %= MOD;
      head++;
    }
    if (c == 3)
      cout << ans << endl;
  }
}
