#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define all(a) (a).begin(), (a).end()
#define YesNo(n) cout << ((n) ? "Yes" : "No") << endl;
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<int, string>;
int main() {
  string S;
  cin >> S;
  sort(all(S));
  cout << S << endl;
}
