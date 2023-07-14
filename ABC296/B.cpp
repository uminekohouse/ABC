#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int num;
  char alpha;
  rep(i, 8) rep(j, 8) {
    char c;
    cin >> c;
    if (c == '*') {
      num = 8 - i;
      alpha = 'a' + j;
    }
  }
  cout << alpha << num << endl;
}
