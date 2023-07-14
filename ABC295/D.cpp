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
  string S;
  cin >> S;
  int N = S.size();
  int now = 0;
  map<int, int> mp;
  REP(i, N) {
    now ^= 1 << (S[i] - '0');
    mp[now]++;
  }
  for (auto v : mp)
    cout << v.first << " " << v.second << endl;
}
