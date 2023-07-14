#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  string S;
  cin >> N >> S;
  for (int i = 0; i < N; ++i)
    cout << S[i] << S[i];
  cout << endl;
}
