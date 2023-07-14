#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  int N;
  cin >> N;
  map<int, vector<int>> mp;
  rep(i, 3 * N) {
    int num;
    cin >> num;
    mp[num].push_back(i);
  }
  vector<int> ans(3 * N);
  for (auto val : mp) {
    int key = val.first;
    vector<int> pos = val.second;
    ans[pos[1]] = key;
  }
  for (auto val : ans)
    if (val)
      cout << val << endl;
}
