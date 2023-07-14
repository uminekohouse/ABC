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

int main() {
  ll N, M;
  cin >> N >> M;
  vs C(N), D(M);
  vll P(M + 1);
  REP(i, N) cin >> C[i];
  REP(i, M) cin >> D[i];
  REP(i, M + 1) cin >> P[i];
  map<string, ll> mp;
  REP(i, M) mp[D[i]] = P[i + 1];
  ll ans = 0;
  for (auto S : C) {
    if (mp.count(S))
      ans += mp[S];
    else
      ans += P[0];
  }
  cout << ans << endl;
}
