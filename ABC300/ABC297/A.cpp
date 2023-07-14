#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  string S;
  cin >> S;
  bool huka = true, ryo = false;
  for (auto c : S) {
    if (c == 'x')
      huka = false;
    if (c == 'o')
      ryo = true;
  }
  if (huka && ryo)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
