#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  string S, T;
  cin >> S >> T;
  for (int i = 0; i < N; ++i) {
    if (S[i] == 'l')
      S[i] = '1';
    else if (S[i] == 'o')
      S[i] = '0';
    if (T[i] == 'l')
      T[i] = '1';
    else if (T[i] == 'o')
      T[i] = '0';
  }
  if (S == T)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
