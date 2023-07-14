#include <bits/stdc++.h>
using namespace std;
using ll = long long;

const int mod = 1000000009;
struct mint {
  ll x;
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
  mint &operator+(const mint a) const {
    mint res(*this);
    return res += a;
  }
  mint &operator-(const mint a) const {
    mint res(*this);
    return res -= a;
  }
  mint &operator*(const mint a) const {
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

struct combination {
  vector<mint> fact, ifact;
  combination(int n) : fact(n), ifact(n) {
    fact[0] = 1;
    for (int i = 1; i <= n; ++i)
      fact[i] = fact[i - 1] * i;
    ifact[n] = fact[n].inv();
    for (int i = n; i >= 1; --i)
      ifact[i - 1] = ifact[i] * i;
  }
  mint operator()(int n, int k) {
    if (k < 0 || n > k)
      return 0;
    return fact[n] * ifact[k] * ifact[n - k];
  }
};

int main() {
  int N, M;
  cin >> N >> M;
  vector<bool> ac_check(N, false);
  vector<int> wa_cnt(N, 0);
  for (int i = 0; i < M; ++i) {
    int p;
    string S;
    cin >> p >> S;
    --p;
    if (!ac_check[p]) {
      if (S == "AC")
        ac_check[p] = true;
      else
        wa_cnt[p]++;
    }
  }
  int ac_sum = 0, wa_sum = 0;
  for (int i = 0; i < N; ++i) {
    if (ac_check[i])
      ac_sum++, wa_sum += wa_cnt[i];
  }
  cout << ac_sum << " " << wa_sum << endl;
}
