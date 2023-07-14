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
  int N;
  cin >> N;
  vi A(N);
  REP(i, N) cin >> A[i];
  string S;
  cin >> S;
  vi M0, M1, M2, E0, E1, E2, X0, X1, X2;
  REP(i, N) {
    if (A[i] == 0) {
      if (S[i] == 'M')
        M0.push_back(i);
      if (S[i] == 'E')
        E0.push_back(i);
      if (S[i] == 'X')
        X0.push_back(i);
    }

    if (A[i] == 1) {
      if (S[i] == 'M')
        M1.push_back(i);
      if (S[i] == 'E')
        E1.push_back(i);
      if (S[i] == 'X')
        X1.push_back(i);
    }

    if (A[i] == 2) {
      if (S[i] == 'M')
        M2.push_back(i);
      if (S[i] == 'E')
        E2.push_back(i);
      if (S[i] == 'X')
        X2.push_back(i);
    }
  }
  int ans = 0;
  REP(i, M0.size()) {
    int j = lower_bound(ALL(E0), M0[i]) - E0.begin();
    ans += X0.end() - lower_bound(ALL(X0), E0[j]);
