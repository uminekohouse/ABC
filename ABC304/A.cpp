#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  vector<int> A(N);
  int key = 1 << 30;
  int years = 1 << 30;
  rep(i, N) {
    cin >> S[i] >> A[i];
    if (A[i] < years) {
      years = A[i];
      key = i;
    }
  }
  rep(i, N) cout << S[(i + key) % N] << endl;
}
