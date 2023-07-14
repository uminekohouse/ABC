#include <bits/stdc++.h>
#define rep(i, n) for (int i = 0; i < (n); ++i)
using namespace std;
using ll = long long;
using P = pair<int, int>;
using Graph = vector<vector<int>>;

vector<double> A(N), B(N), C(N);

bool func(double mid) {
  double l_time = r_time = 0;
  for (int i = 0; i < N; ++i) {
    if(

int main() {
      int N;
      cin >> N;
      rep(i, N) cin >> A[i] >> B[i];
      rep(i, N) C[i] = A[i] / B[i];
      double l = r = 0;
      rep(i, N) r += A[i];
      while ((r - l) < 1e-5) {
        double mid = (l + r) / 2.0;
        if (func(mid))
          l = mid;
        else
          r = mid;
      }
      cout << l << endl;
}
