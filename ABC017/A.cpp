#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int sum = 0;
  rep(i, 3) {
    int s, e;
    cin >> s >> e;
    sum += s / 10 * e;
  }
  cout << sum << endl;
}
