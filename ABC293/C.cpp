#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

int main() {
  ll Q;
  cin >> Q;
  ll add = 0;
  priority_queue<ll, vector<ll>, greater<ll>> que;
  rep(_, Q) {
    ll c;
    cin >> c;
    if (c == 1) {
      ll X;
      cin >> X;
      que.push(X);
    }
    if (c == 2) {
      ll tmp;
      cin >> tmp;
      add += tmp;
    }
    if (c == 3) {
      ll tmp = que.top();
      que.pop();
      tmp += add;
      cout << tmp << endl;
    }
  }
}
