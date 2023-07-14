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
  vi S(8);
  REP(i, 8) cin >> S[i];
  bool ok = true;
  REP(i, 8) {
    if (i && S[i - 1] > S[i])
      ok = false;
    if (S[i] < 100 || 675 < S[i] || S[i] % 25 != 0)
      ok = false;
  }
  if (ok)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
