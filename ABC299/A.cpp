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
  int cnt_1 = 0, cnt_2 = 0;
  for (auto c : S) {
    if (c == '|')
      cnt_1++;
    if (cnt_1 == 1 && c == '*')
      cnt_2++;
  }
  if (cnt_2)
    cout << "in" << endl;
  else
    cout << "out" << endl;
}
