#include <bits/stdc++.h>
using namespace std;
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  string S;
  cin >> S;
  for (auto c : S) {
    if (c == '0')
      cout << 1;
    else
      cout << 0;
  }
  cout << endl;
}
