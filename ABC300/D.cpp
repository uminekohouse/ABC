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

vector<bool> Eratosthenes(ll N) {
  vector<bool> isprime(N + 1, true);
  isprime[0] = isprime[1] = false;
  for (int i = 2; i <= N; ++i) {
    if (!isprime[i])
      continue;
    for (int j = i * i; j <= N; j += i)
      isprime[j] = false;
  }
  return isprime;
}

int main() {
  ll N;
  cin >> N;
  vector<bool> isprime = Eratosthenes(300);
  vector<int> primes;
  for (int i = 0; i < 300; ++i)
    if (isprime[i])
      primes.push_back(i);
  int ans = 0;
  for (int b = 1; b < primes.size() - 1; ++b) {
    for (int a = 0; a < b; ++a) {
      for (int c = b + 1; c < primes.size(); ++c) {
        ll A = primes[a];
        ll B = primes[b];
        ll C = primes[c];
        if (A * A * B * C * C <= N)
          ans++;
      }
    }
  }
  cout << ans << endl;
}
