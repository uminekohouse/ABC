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
  int N;
  cin >> N;
  map<int, int> A;
  vi B(N), C(N);
  REP(i, N) {
    int tmp;
    cin >> tmp;
    A[tmp]++;
  }
  REP(i, N) cin >> B[i];
  REP(i, N) cin >> C[i];
  REP(i, N) C[i]--;
  ll ans = 0;
  REP(i, N) { ans += A[B[C[i]]]; }
  cout << ans << endl;
}
