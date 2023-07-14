#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  int Q;
  cin >> Q;
  map<int, multiset<int>> mp2;
  map<int, set<int>> mp3;
  rep(_, Q) {
    int c;
    cin >> c;
    if (c == 1) {
      int i, j;
      cin >> i >> j;
      mp2[j].insert(i);
      mp3[i].insert(j);
    }
    if (c == 2) {
      int i;
      cin >> i;
      for (auto val : mp2[i])
        cout << val << endl;
    }
    if (c == 3) {
      int i;
      cin >> i;
      for (auto val : mp3[i])
        cout << val << endl;
    }
  }
}
