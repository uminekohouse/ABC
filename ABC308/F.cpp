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
using vpii = vector<pair<int, int>>;
using Graph = vector<vector<int>>;

int main() {
  int N, M;
  cin >> N >> M;
  vll P(N), L(M), D(M);
  vector<pair<ll, ll>> coupon(M);
  REP(i, N) cin >> P[i];
  REP(i, M) cin >> L[i];
  REP(i, M) cin >> D[i];
  REP(i, M) coupon[i] = {D[i], -L[i]};
  sort(ALL(P));
  sort(RALL(coupon));
  vi used(N);
  REP(i, M) {
    ll D = coupon[i].first;
    ll L = -coupon[i].second;
    int D_key = lower_bound(ALL(P), D) - P.begin();
    int L_key = lower_bound(ALL(P), L) - P.begin();
    int key = max(D_key, L_key);
    bool ok = false;
    for (int j = key; j < N; ++j) {
      if (used[j] == 0) {
        used[j] = 1;
        P[j] -= D;
        ok = true;
        break;
      }
    }
    if (ok)
      continue;
    for (int j = L_key; j < N; ++j) {
      if (used[j] == 0) {
        used[j] = 1;
        P[j] = max(ll(0), P[j] - D);
        break;
      }
    }
  }
  ll ans = 0;
  for (auto val : P)
    ans += val;
  cout << ans << endl;
  /*
  for (auto val : coupon) {
    int D = val.first;
    int L = val.second;
    cout << D << " " << L << endl;
  }
  */
}
