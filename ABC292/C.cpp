#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  map<int, int> mp;
  rep(i, N - 1) {
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }
  for (int i = 1; i <= N; ++i)
    cout << mp[i] << endl;
}
