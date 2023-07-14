#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  ll A, B;
  cin >> A >> B;
  ll cnt = 0;
  while (A != B) {
    if (A > B)
      swap(A, B);
    if (A == 1) {
      cnt += B - 1;
      break;
    } else if (B % A == 0) {
      cnt += (B / A) - 1;
      break;
    } else {
      cnt += B / A;
      B = B % A;
    }
  }
  cout << cnt << endl;
}
