#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;
  int X;
  cin >> X;
  int t = X / (A + C) * A * B + min(X % (A + C), A) * B;
  int a = X / (D + F) * D * E + min(X % (D + F), D) * E;
  if (t > a)
    cout << "Takahashi" << endl;
  else if (t < a)
    cout << "Aoki" << endl;
  else
    cout << "Draw" << endl;
}
