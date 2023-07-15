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

int main() {
  int N, t, M;
  cin >> N >> t >> M;
  map<int, vi> mp;
  REP(i, M) {
    int A, B;
    cin >> A >> B;
    --A;
    --B;
    mp[A].PB(B);
    mp[B].PB(A);
  }

  string S;
  REP(i, N) S += '0';
  set<string> st_S;
  function<void(string, int)> func = [&](string T, int num) {
    if (num == N) {
      st_S.insert(T);
      return;
    }
    set<int> st;
    for (auto v : mp[num])
      st.insert(T[v] - '0');
    FOR(j, 1, t + 1) {
      if (st.count(j))
        continue;
      T[num] = char(j + '0');
      func(T, num + 1);
    }
  };
  int ans = 0;
  func(S, 0);
  cout << st_S.size() << endl;
  for (auto s : st_S) {
    cout << s << endl;
    bool ok = true;
    vi cnt(t + 1, 0);
    REP(i, N)
    cnt[s[i] - '0']++;
    REP(i, t) {
      if (cnt[i] == 0)
        ok = false;
    }
    if (ok) {
      cout << s << endl;
      ans++;
    }
  }
  cout << ans << endl;
}
