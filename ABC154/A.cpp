#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string S, T, U;
  cin >> S >> T;
  int a, b;
  cin >> a >> b;
  cin >> U;
  if (S == U)
    a--;
  else
    b--;
  cout << a << " " << b << endl;
}
