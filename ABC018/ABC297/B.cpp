#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N + 1, vector<int>(N + 1));
  vector<vector<int>> B(N + 1, vector<int>(N + 1));
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= N; ++j)
      cin >> A[i][j];
  for (int i = 1; i <= N; ++i)
    for (int j = 1; j <= N; ++j)
      cin >> B[i][j];

  rep(k, 4) {
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= N; ++j) {
        swap(A[i][j], A[N + 1 - j][i]);
      }
    }
    for (int i = 1; i <= N; ++i) {
      for (int j = 1; j <= N; ++j) {
        cout << A[i][j] << " ";
      }
      cout << endl;
    }
  }
  cout << "No" << endl;
}
