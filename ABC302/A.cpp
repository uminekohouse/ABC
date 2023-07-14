#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll A, B;
  cin >> A >> B;
  ll cnt = (A + B - 1) / B;
  cout << cnt << endl;
}
