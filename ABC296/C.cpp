#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  map<int, int> mp;
  rep(i, N) mp[A[i]]++;
  bool flag = false;
  for (auto value : mp) {
    int key = value.first;
    int cnt = value.second;

    if (mp.count(key + X))
      flag = true;
  }
  if (flag)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
