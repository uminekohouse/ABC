#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll N, K;
  cin >> N >> K;
  rep(_, K) {
    if (N % 200 == 0)
      N /= 200;
    else
      N *= 1000, N += 200;
  }
  cout << N << endl;
}
