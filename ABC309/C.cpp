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
using pll = pair<ll, ll>;
using Graph = vector<vector<int>>;

int main() {
  int N, K;
  cin >> N >> K;
  vector<pll> pil(N);
  ll sum = 0;
  ll now = 0;
  REP(i, N) {
    ll a, b;
    cin >> a >> b;
    sum += b;
    pil[i] = {a, b};
  }
  if (sum <= K) {
    cout << 1 << endl;
    return 0;
  }
  sort(ALL(pil));
  for (auto v : pil) {
    auto [a, b] = v;
    now = a + 1;
    sum -= b;
    if (sum <= K) {
      cout << now << endl;
      return 0;
    }
  }
}
