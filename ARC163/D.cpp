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

vi dh = {-1, 0, +1, 0};
vi dw = {0, +1, 0, -1};

int main() {
  int H, W;
  cin >> H >> W;
  vs S(H);
  REP(i, H) cin >> S[i];

  if (S[0][0] != 's') {
    cout << "No" << endl;
    return 0;
  }
  map<char, char> mp;
  mp['s'] = 'n';
  mp['n'] = 'u';
  mp['u'] = 'k';
  mp['k'] = 'e';
  mp['e'] = 's';
  vvi seen(H, vi(W, 0));

  function<void(int, int)> func = [&](int h, int w) {
    seen[h][w] = 1;
    REP(i, 4) {
      int nh = h + dh[i];
      int nw = w + dw[i];
      if (nh < 0 || nh >= H || nw < 0 || nw >= W)
        continue;
      if (seen[nh][nw])
        continue;
      if (S[nh][nw] != mp[S[h][w]])
        continue;
      func(nh, nw);
    }
  };
  func(0, 0);
  if (seen[H - 1][W - 1])
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
