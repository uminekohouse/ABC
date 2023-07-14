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
using pll = pair<ll, ll>;
using Graph = vector<vector<int>>;

int solve(int N, vector<int> A, vector<int> B) {
  int ans = 10000;
  function<void(int, int, int, int)> func = [&](int Takahashi, int Aoki,
                                                int num, int cnt) {
    if (num == N) {
      if (Takahashi > Aoki)
        ans = min(ans, cnt);
      return;
    }
    func(Takahashi + A[num] + B[num], Aoki, num + 1, cnt + 1);
    func(Takahashi, Aoki + B[num], num + 1, cnt);
  };
  func(0, 0, 0, 0);
  return ans;
}

int solve1(vector<pii> vec, int N, int A_sum) {
  int T_sum = 0;
  sort(RALL(vec));
  for (int i = 0; i < N; ++i) {
    T_sum += vec[i].first;
    A_sum -= vec[i].first + vec[i].second;
    if (T_sum > A_sum) {
      return i + 1;
    }
  }
  return 0;
}

int main() {
  int N = 10;
  REP(_, 20) {
    vector<pii> vec(N);
    vector<int> A(N), B(N);
    int A_sum = 0;
    REP(i, N) {
      int a, t;
      a = rand() % 100;
      t = rand() % 100;
      A[i] = a;
      B[i] = t;
      vec[i] = {a + t, -t};
      A_sum += a;
    }
    int p = solve(N, A, B);
    int q = solve1(vec, N, A_sum);
    if (p != q) {
      cout << p << " " << q << endl;
      for (auto a : A)
        cout << a << " ";
      cout << endl;
      for (auto a : B)
        cout << a << " ";
      cout << endl;
    }
  }
}
