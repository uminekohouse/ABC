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

using tup = tuple<int, ll, ll>;

bool comb(tup a, tup b) {
  int a1, b1;
  ll a2, a3, b2, b3;
  tie(a1, a2, a3) = a;
  tie(b1, b2, b3) = b;
  if (a2 * b3 != b2 * a3)
    return a2 * b3 < b2 * a3;
  else
    return a1 > b1;
}

int main() {
  int N;
  cin >> N;
  vector<tup> vec(N);
  REP(i, N) {
    ll A, B;
    cin >> A >> B;
    vec[i] = make_tuple(i, A, A + B);
  }
  sort(RALL(vec), comb);
  for (auto val : vec) {
    int num;
    ll i, j;
    tie(num, i, j) = val;
    cout << num + 1 << endl;
  }
}
