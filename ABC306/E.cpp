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
  int N, K, Q;
  cin >> N >> K >> Q;
  multiset<ll> S;
  multiset<ll> T;
  REP(i, K) S.insert(0);
  REP(i, N - K) T.insert(0);
  vi A(N, 0);
  ll ans = 0;
  if (N == K) {
    REP(_, Q) {
      ll X, Y;
      cin >> X >> Y;
      ans -= A[X - 1];
      A[X - 1] = Y;
      ans += A[X - 1];
      cout << ans << endl;
    }
    return 0;
  }
  REP(_, Q) {
    ll X, Y;
    cin >> X >> Y;
    ll a = A[X - 1];
    A[X - 1] = Y;
    // 上位K個にaがあった
    if (S.find(a) != S.end()) {
      S.erase(S.find(a)); // 該当のaを削除
      ans -= a;
      // 新しいaをどちらに入れるか
      // Sに入れる場合
      ll T_max = *T.rbegin();
      if (T_max <= Y) {
        S.insert(Y);
        ans += Y;
      } else {
        T.erase(T.find(T_max));
        T.insert(Y);
        S.insert(T_max);
        ans += T_max;
      }
    } else {
      T.erase(T.find(a));
      ll S_min = *S.begin();
      if (S_min < Y) {
        S.erase(S.find(S_min));
        S.insert(Y);
        ans = ans - S_min + Y;
        T.insert(S_min);
      } else {
        T.insert(Y);
      }
    }
    cout << ans << endl;
  }
}
