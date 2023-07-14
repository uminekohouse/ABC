#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  int N;
  cin >> N;
  int L = 1, R = N;
  while (R - L > 1) {
    int M = (L + R) / 2;
    cout << "?"
         << " " << M << endl;
    int S;
    cin >> S;
    if (S == 0)
      L = M;
    else
      R = M;
  }
  cout << "!"
       << " " << (L + R) / 2 << endl;
}
