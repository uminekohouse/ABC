#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  string S;
  cin >> S;
  int n;
  cin >> n;
  rep(i, S.size()) {
    cout << S << endl;
    rotate(S.begin(), S.begin() + n, S.end());
  }
}
