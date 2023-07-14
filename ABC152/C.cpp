#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int n;
  cin >> n;
  int p[n];
  rep(i, n) cin >> p[i];
  int cnt = 0;
  int m = p[0];
  rep(i, n) {
    m = min(m, p[i]);
    if (p[i] <= m)
      cnt++;
  }
  cout << cnt << endl;
}
