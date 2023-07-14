#include <bits/stdc++.h>
#define PB push_back
#define MP make_pair
#define REP(i, n) for (int i = 0; i < (n); ++i)
#define FOR(i, n, m) for (int i = (n); i < (m); ++i)
#define ALL(a) (a).begin(), (a).end()
#define RALL(a) (a).rbegin(), (a).rend()
using namespace std;
using ll = long long;
using vi = vector<int>;
using vll = vector<ll>;
using vvi = vector<vi>;
using vvll = vector<vll>;
using vs = vector<string>;
using pii = pair<int, int>;
using Graph = vector<vector<int>>;

vvll memo(61, vll(61, -1));
ll nCr(int n, int r) {
  if (memo[n][r] != -1)
    return memo[n][r];
  return memo[n][r] = nCr(n - 1, r - 1) + nCr(n - 1, r);
}

int main() {
  int A, B, K;

  vs vec(K + 1);
  memo[1][1] = 1;
  function<void(int, int, ll, string)> func = [&](int A, int B, ll num,
                                                  string S) {
    if (num > K)
      return;
    if (A == 0 && B == 0) {
      vec[num] = S;
      return;
    }
    if (A)
      func(A - 1, B, num, S + 'a');
    if (B) {
      if (A == 0)
        func(A, B - 1, num, S + 'b');
      else
        func(A, B - 1, num + nCr(A + B - 1, B), S + 'b');
    }
  };
  func(A, B, 1, "");
  for (auto s : vec)
    cout << s << endl;
}
