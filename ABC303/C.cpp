#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  int N, M, H, K;
  cin >> N >> M >> H >> K;
  string S;
  cin >> S;
  map<pint, bool> mp;
  rep(_, M) {
    int x, y;
    cin >> x >> y;
    mp[make_pair(x, y)] = true;
  }
  int x = 0, y = 0;
  rep(i, S.size()) {
    if (S[i] == 'U')
      y += 1;
    if (S[i] == 'D')
      y -= 1;
    if (S[i] == 'R')
      x += 1;
    if (S[i] == 'L')
      x -= 1;
    H--;
    if (mp[make_pair(x, y)] && H < K) {
      H = K;
      mp[make_pair(x, y)] = false;
    }
    if (H == 0 && i != S.size() - 1) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
