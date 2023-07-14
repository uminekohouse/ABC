#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using P = pair<ll, ll>;

string T = "01234567890123456789";

int main() {
  string S;
  cin >> S;
  vector<int> X(4);
  rep(i, S.size()) X[i] = S[i] - '0';
  bool check = true;
  if (X[0] == X[1] && X[1] == X[2] && X[2] == X[3])
    check = false;
  for (int i = 0; i < 17; ++i) {
    if (S == T.substr(i, 4))
      check = false;
  }
  if (check)
    cout << "Strong" << endl;
  else
    cout << "Weak" << endl;
}
