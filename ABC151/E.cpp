#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, int>;
// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
const int mod = 1000000007;
struct mint {
  ll x; // typedef long long ll;
  mint(ll x = 0) : x((x % mod + mod) % mod) {}
  mint operator-() const { return mint(-x); }
  mint &operator+=(const mint a) {
    if ((x += a.x) >= mod)
      x -= mod;
    return *this;
  }
  mint &operator-=(const mint a) {
    if ((x += mod - a.x) >= mod)
      x -= mod;
    return *this;
  }
  mint &operator*=(const mint a) {
    (x *= a.x) %= mod;
    return *this;
  }
  mint operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint operator*(const mint a) const {
    mint res(*this);
    return res *= a;
  }
  mint pow(ll t) const {
    if (!t)
      return 1;
    mint a = pow(t >> 1);
    a *= a;
    if (t & 1)
      a *= *this;
    return a;
  }

  // for prime mod
  mint inv() const { return pow(mod - 2); }
  mint &operator/=(const mint a) { return (*this) *= a.inv(); }
  mint operator/(const mint a) const {
    mint res(*this);
    return res /= a;
  }
};
// combination mod prime
// https://www.youtube.com/watch?v=8uowVvQ_-Mo&feature=youtu.be&t=1619
struct combination {
  vector<mint> fact, ifact;
  combination(int n) : fact(n + 1), ifact(n + 1) {
    assert(n < mod);
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
      fact[i] = fact[i - 1] * i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i)
      ifact[i - 1] = ifact[i] * i;
  }
  mint operator()(int n, int k) {
    if (k < 0 || k > n)
      return 0;
    return fact[n] * ifact[k] * ifact[n - k];
  }
};
int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  sort(A.begin(), A.end());
  combination c(N + 5);
  mint ans = 0;
  int fugo = 1;
  rep(j, 2) {
    if (j == 1)
      fugo = -1;
    for (int i = 0; i < N; ++i) {
      mint tmp = c(i, K - 1);
      ans += tmp * A[i] * fugo;
    }
    reverse(A.begin(), A.end());
  }
  cout << ans.x << endl;
}
