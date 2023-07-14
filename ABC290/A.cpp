#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
tuple T = tuple<int, int, vectot<int>>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> T(N), K(N);
  vector<vector<int>> A(N, vector<int>());
  rep(i, N) {
    cin >> T[i];
    cin >> K[i];
    rep(j, K[i]) {
      int tmp;
      cin >> tmp;
      A[i].push_back[tmp];
    }
  }
  rep(i, N) T[i] *= -1;
  priority_queue<P, vector<P> greater<P>> que;
  rep(i, N) que.push({K[i], T[i], A[i]});
  vector<bool> prob(N, false);
  int ans = 0;
  while (!que.size()) {
    auto t = que.top();
  }
