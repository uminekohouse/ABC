#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using Graph = vector<vector<int>>;

int main() {
  vector<int> A(3), B(3);
  rep(i, 3) {
    int tmp;
    cin >> tmp;
    A[i] = B[i] = tmp;
  }
  sort(A.rbegin(), A.rend());
  rep(i, 3) {
    rep(j, 3) {
      if (A[i] == B[j])
        cout << j + 1 << endl;
    }
  }
}
