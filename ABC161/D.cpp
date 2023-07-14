#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int M;
  cin >> M;
  vector<int> B(100009, false);
  rep(i, M) {
    int tmp;
    cin >> tmp;
    B[tmp] = true;
  }
  int X;
  cin >> X;
  unordered_set<int> now;
  now.insert(0);
  unordered_set<int> nex;
  for (int i = 0; i < 10000; ++i) {
    // cout << i << endl;
    nex = {};
    for (auto v : now) {
      for (auto a : A) {
        int nv = v + a;
        if (nv > X)
          continue;
        if (B[nv])
          continue;
        nex.insert(nv);
      }
    }
    swap(nex, now);
    if (now.count(X))
      break;
    if (now.size() == 0)
      break;
  }
  if (now.count(X))
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
