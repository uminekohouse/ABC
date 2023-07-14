#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int a, b;
  cin >> a >> b;
  if (b < a)
    swap(a, b);
  rep(i, b) cout << a;
  cout << endl;
}
