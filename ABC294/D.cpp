#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, Q;
  cin >> N >> Q;
  set<int> st1, st2, st3;
  rep(i, N) st1.insert(i + 1);
  vector<int> vec;
  rep(_, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int num = *begin(st1);
      st1.erase(num);
      st2.insert(num);
    }
    if (c == 2) {
      int x;
      cin >> x;
      st2.erase(x);
    }
    if (c == 3) {
      int num = *begin(st2);
      vec.push_back(num);
    }
  }
  for (auto v : vec)
    cout << v << endl;
}
