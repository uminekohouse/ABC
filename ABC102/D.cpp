#include <bits/stdc++.h>
#define all(x) (x).begin(), (x).end()
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1);
  rep(i, N) cin >> A[i + 1];
  vector<int> sum(N + 1);
  rep(i, N) sum[i + 1] = sum[i] + A[i + 1];
  int L = 1, R = N;
  while (L < R) {
