#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; ++i)
    cin >> A[i];
  vector<int> left_max(N + 1, 0), right_max(N + 1, 0);
  for (int i = 1; i <= N; ++i)
    left_max[i] = max(left_max[i - 1], A[i - 1]);
}
