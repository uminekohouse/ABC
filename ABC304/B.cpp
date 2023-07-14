#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;
using pint = pair<int, int>;

string func(string N) {
  if (N.size() <= 3)
    return N;
  else {
    reverse(N.begin(), N.end());
    rep(i, N.size() - 3) N[i] = '0';
    reverse(N.begin(), N.end());

    return N;
  }
}

int main() {
  string N;
  cin >> N;
  cout << func(N) << endl;
}
