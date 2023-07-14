#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;

int main() {
  int D, N;
  cin >> D >> N;
  for (int i = 1; i <= 100000000; ++i) {
    int tmp = i;
    int cnt = 0;
    while (1) {
      if (tmp % 100 == 0)
        tmp /= 100, cnt++;
      else
        break;
    }
    if (cnt == D)
      N--;
    if (N == 0) {
      cout << i << endl;
      return 0;
    }
  }
}
