#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

int main() {
  char p, q;
  cin >> p >> q;
  map<char, int> mp;
  mp['A'] = 0;
  mp['B'] = 3;
  mp['C'] = 4;
  mp['D'] = 8;
  mp['E'] = 9;
  mp['F'] = 14;
  mp['G'] = 23;
  cout << abs(mp[p] - mp[q]) << endl;
}
