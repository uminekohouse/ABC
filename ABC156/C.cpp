#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> X(N);
  rep(i, N) cin >> X[i];
  int ave = 0;
  rep(i, N) ave += X[i];
  ave /= N;
  int ans = 0;
  rep(i, N) ans += pow(ave - X[i], 2);
  int tmp = 0;
  ave++;
  rep(i, N) tmp += pow(ave - X[i], 2);
  ans = min(ans, tmp);
  cout << ans << endl;
}
