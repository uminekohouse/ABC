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
  int N, M;
  cin >> N >> M;
  vi P(N), C(N);
  vvi F(N, vi(M, 0));
  REP(i, N) {
    cin >> P[i] >> C[i];
    REP(j, C[i]) {
      int tmp;
      cin >> tmp;
      F[i][tmp - 1]++;
    }
  }
  REP(i, N) {
    REP(j, N) {
      if (i == j)
        continue;
      bool ok = true;
      bool flag = false;

      REP(k, M) {
        if (F[i][k] < F[j][k]) {
          ok = false;
        } else if (F[i][k] && F[j][k] == 0)
          flag = true;
      }
      if (!ok)
        continue;
      if ((P[i] <= P[j] && flag) || (P[i] < P[j])) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }
  cout << "No" << endl;
}
