#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, M;
  cin >> N >> M;
  string S;
  while (N) {
    S.push_back(char(N % M + '0'));
    N /= M;
  }
  reverse(S.begin(), S.end());
  cout << S << endl;
}
