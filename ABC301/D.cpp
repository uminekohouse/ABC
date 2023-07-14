#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;

int main() {
  string S;
  cin >> S;
  ll N;
  cin >> N;

  ll res = 0;
  reverse(S.begin(), S.end());
  for (int i = 0; i < S.size(); ++i) {
    if (S[i] == '1')
      res += 1LL << i;
    else if (S[i] == '?') {
      ll tmp = res;
      tmp += 1LL << i;
      for (int j = i + 1; j < S.size(); ++j) {
        if (S[j] == '1')
          tmp += 1LL << j;
      }
      if (tmp <= N)
        res += 1LL << i;
    }
  }
  cout << (res <= N ? res : -1) << endl;
}
