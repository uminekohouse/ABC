#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int diff = 1000;
  int ans = 0;
  for (int i = 0; i <= 20; ++i) {
    if (diff >= abs(i * 5 - N)) {
      diff = abs(i * 5 - N);
      ans = i * 5;
    }
  }
  cout << ans << endl;
}
