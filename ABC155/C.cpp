#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<int, int>;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  map<string, int> mp;
  rep(i, N) {
    string S;
    cin >> S;
    mp[S]--;
  }
  int m = 1 << 30;
  for (auto v : mp)
    m = min(m, v.second);
  for (auto v : mp) {
    if (m == v.second)
      cout << v.first << endl;
  }
}
