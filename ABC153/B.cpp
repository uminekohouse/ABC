#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)

int main() {
  int H, N;
  cin >> H >> N;
  vector<int> A(N);
  rep(i, N) cin >> A[i];
  int sum = 0;
  rep(i, N) sum += A[i];
  if (sum >= H)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;
}
