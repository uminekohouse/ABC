#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using Pint = pair<int, int>;

struct Pos {
  int x;
  int y;
};

int main() {
  int W, H;
  cin >> W >> H;
  int N;
  cin >> N;
  vector<Pos> vec(N);
  rep(i, N) cin >> vec[i].x >> vec[i].y;

  int a;
  cin >> a;
  vector<int> A(a + 1, 0);
  rep(i, a) cin >> A[i + 1];
  A.push_back(W);

  int b;
  cin >> b;
  vector<int> B(b + 1, 0);
  rep(i, b) cin >> B[i + 1];
  B.push_back(H);

  // それぞれがどのブロックに属するかmapに記入
  map<Pint, int> mp;
  rep(i, N) {
    int X = upper_bound(A.begin(), A.end(), vec[i].x) - A.begin() - 1;
    int Y = upper_bound(B.begin(), B.end(), vec[i].y) - B.begin() - 1;
    mp[{X, Y}]++;
  }
  int m = 1 << 30, M = 0;
  if (mp.size() < (a + 1) * (b + 1))
    m = 0;
  else
    for (auto val : mp)
      m = min(m, val.second);
  for (auto val : mp)
    M = max(M, val.second);

  cout << m << endl;
  cout << M << endl;
}
