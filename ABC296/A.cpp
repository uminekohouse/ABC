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
  for (int i = 0; i < N; i += 1) {
    if (S[i] == S[i + 1]) {
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}
