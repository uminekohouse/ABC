#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int a, b;
  cin >> a >> b;
  cout << (a + b - 1) / b * b - a << endl;
}
