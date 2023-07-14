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

struct P {
  int x, y;
};

bool func(P a, P b) {
  int dx = a.x - b.x;
  int dy = a.y - b.y;
  if (dy <= dx || -dx <= dy)
    return true;
  else
    return false;
}

int main() {
  int N;
  cin >> N;
  vector<P> vec(N);
  REP(i, N) cin >> vec[i].x >> vec[i].y;
  int cnt = 0;
  FOR(i, 0, N - 1) {
    FOR(j, i + 1, N) {
      if (func(vec[i], vec[j]))
        cnt++;
    }
  }
  cout << cnt << endl;
}
