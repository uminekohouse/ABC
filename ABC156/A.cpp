#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N, R;
  cin >> N >> R;
  cout << (N < 10 ? R + 100 * (10 - N) : R) << endl;
}
