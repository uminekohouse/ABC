#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

int main() {
  int N, M;
  cin >> N >> M;
  Graph G(N);
  for (_, M) {
    int A, C;
    char B, D;
    G[A - 1].push_back(C - 1);
    G[C - 1].push_back(A - 1);
  }
}
