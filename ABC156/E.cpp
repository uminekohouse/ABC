#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
// auto mod int
// https://youtu.be/L8grWxBlIZ4?t=9858
// https://youtu.be/ERZuLAxZffQ?t=4807 : optimize
// https://youtu.be/8uowVvQ_-Mo?t=1329 : division
const int mod = 1000000007;
struct mint {
  ll val; // typedef long long ll;
  mint(ll val = 0) : val((val % mod + mod) % mod) {}
  mint operator-() const { return mint(-val); }
  mint &operator+=(const mint a) {
    if ((val += a.val) >= mod)
      val -= mod;
    return *this;
  }
  mint &operator-=(const mint a) {
    if ((val += mod - a.val) >= mod)
      val -= mod;
    return *this;
  }
  mint &operator*=(const mint a) {
    (val *= a.val) %= mod;
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
  int n, k;
  cin >> n >> k;
  mint ans = 0;
  combination c(400005);
  for (int zero = 0; zero <= min(k, n - 1); zero++) {
    // cout << c(n, zero).val << endl;
    // cout << c(n - 1, n - zero).val << endl;
    ans += c(n, zero) * c(n - 1, n - zero - 1);
  }
  cout << ans.val << endl;
}
